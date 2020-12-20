////////////////////////////////
// Workfile : main.cpp
// Date : 19.12.2020
// Description : Testing Driver
////////////////////////////////

#include <iostream>
#include <cassert>
#include <string>
#include <memory>
//#include <vld.h>

#include "CarRental.h"
#include "MotorVehicle.h"
#include "SmallCar.h"
#include "MidRangeCar.h"
#include "PremiumCar.h"
#include "SUV.h"
#include "NavigationSystem.h"
#include "Xenon.h"
#include "CruiseControl.h"
#include "AirConditioner.h"

using namespace std;

int main()
{
	try
	{
		MotorVehicle::SPtr car1{ make_shared<SmallCar>("Opel", "Astra") };
		MotorVehicle::SPtr car2{ make_shared<MidRangeCar>("Volkswagen", "Golf") };
		MotorVehicle::SPtr car3{ make_shared<SUV>("Mercedes", "GLA") };
		MotorVehicle::SPtr car4{ make_shared<PremiumCar>("Ferrari", "Testarossa") };
		MotorVehicle::SPtr car5{ make_shared<SmallCar>("Opel", "Corsa") };

		MotorVehicle::SPtr konfig1{ make_shared<AirConditioner>
			(make_shared<NavigationSystem>(car2)) };
		MotorVehicle::SPtr konfig2{ make_shared<AirConditioner>
			(make_shared<CruiseControl>(make_shared<Xenon>
				(make_shared<NavigationSystem>(car4)))) };
		MotorVehicle::SPtr konfig3{ make_shared<CruiseControl>(car3) };

		CarRental c;
		c.Add(car1);
		c.Add(konfig1);
		c.Add(konfig2);
		c.Add(konfig3);

		cout << "#######################################################" << endl;
		cout << "Ausgabe der Liste von GetAvailable (ohne Suchkriterien)" << endl;
		cout << "#######################################################" << endl;
		for (auto const& elem : c.GetAvailable())
		{
			elem->Print(cout);
			cout << endl;
			cout << endl;
		}
		cout << endl;

		cout << "############################################" << endl;
		cout << "Ausgabe der verfuegbaren Autos mittels Print" << endl;
		cout << "############################################" << endl;
		c.PrintAvailable(cout);
		cout << endl;
		cout << "############################################" << endl;
		cout << "Ausgabe der reservierten Autos mittels Print" << endl;
		cout << "############################################" << endl;
		c.PrintReserved(cout);

		c.Reserve(car1);
		c.Reserve(konfig2);
		cout << endl;

		cout << "#############################################" << endl;
		cout << "Ausgabe nach zwei Reservierungen (verfuegbar)" << endl;
		cout << "#############################################" << endl;
		c.PrintAvailable(cout);
		cout << endl;
		cout << "#############################################" << endl;
		cout << "Ausgabe nach zwei Reservierungen (reserviert)" << endl;
		cout << "#############################################" << endl;
		c.PrintReserved(cout);
		cout << endl;

		cout << "########################################" << endl;
		cout << "Suche nach bestimmtem Typ (GetReserved)" << endl;
		cout << "########################################" << endl;
		for (auto const& elem : c.GetReserved("", "Testarossa"))
		{
			elem->Print(cout);
			cout << endl;
			cout << endl;
		}
		cout << endl;

		c.Back(car1);
		c.Back(konfig2);

		cout << "##############################################################" << endl;
		cout << "Ausgabe nach Zurueckgeben der zwei Reservierungen (verfuegbar)" << endl;
		cout << "##############################################################" << endl;
		c.PrintAvailable(cout);
		cout << endl;
		cout << "##############################################################" << endl;
		cout << "Ausgabe nach Zurueckgeben der zwei Reservierungen (reserviert)" << endl;
		cout << "##############################################################" << endl;
		c.PrintReserved(cout);
		cout << endl;

		c.Add(car5);

		cout << "###############################################" << endl;
		cout << "Suche nach bestimmtem Hersteller (GetAvailable)" << endl;
		cout << "###############################################" << endl;
		for (auto const& elem : c.GetAvailable("Opel"))
		{
			elem->Print(cout);
			cout << endl;
			cout << endl;
		}
		cout << endl;

		cout << "################################################" << endl;
		cout << "Suche nach nicht vorhandenem Auto (GetAvailable)" << endl;
		cout << "################################################" << endl;
		for (auto const& elem : c.GetAvailable("Audi", "A5"))
		{
			elem->Print(cout);
			cout << endl;
			cout << endl;
		}
		cout << endl;
	}
	catch (string const& error)
	{
		assert(!error.empty());
		cerr << error << endl;

		return 1; // Programm mit Fehlercode beenden
	}
	catch (bad_alloc const& error)
	{
		cerr << "memory allocation: " << error.what() << endl;

		return 1;
	}
	catch (exception const& error)
	{
		cerr << "standard exception: " << error.what() << endl;

		return 1;
	}
	catch (...)
	{
		cerr << "unhandled exception" << endl;

		return 1;
	}

	return 0;
}