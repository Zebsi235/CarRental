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
		CarRental c;
		//c.Add(car1);
		//c.Add(car2);
		c.Add(car3);
		c.Add(car4);
		c.Add(make_shared<Xenon>(car1));
		c.Add(make_shared<NavigationSystem>(car2));

		for (auto const& elem : c.GetAvailable())
		{
			elem->Print(cout);
		}
		cout << endl;
		c.PrintAvailable(cout);
		cout << endl;
		c.PrintReserved(cout);

		c.Reserve(car1);
		c.Reserve(car4);
		cout << endl;
		c.PrintAvailable(cout);
		cout << endl;
		c.PrintReserved(cout);
		cout << endl;
		for (auto const& elem : c.GetAvailable())
		{
			elem->Print(cout);
		}
		cout << endl;
		for (auto const& elem : c.GetReserved())
		{
			elem->Print(cout);
		}
		cout << endl;

		c.Back(car1);
		c.Back(car4);

		c.PrintAvailable(cout);
		cout << endl;
		c.PrintReserved(cout);
		cout << endl;
		for (auto const& elem : c.GetAvailable())
		{
			elem->Print(cout);
		}
		cout << endl;
		for (auto const& elem : c.GetReserved())
		{
			elem->Print(cout);
		}
		cout << endl;
		c.Add(car5);
		for (auto const& elem : c.GetAvailable("Opel"))
		{
			elem->Print(cout);
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