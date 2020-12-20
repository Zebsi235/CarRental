////////////////////////////////
// Workfile : CarRental.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Client CarRental
////////////////////////////////

#include "CarRental.h"
#include <list>
#include <iostream>

using namespace std;

list<MotorVehicle::SPtr> SearchCar(list<MotorVehicle::SPtr> list,
				string const& manufacturer, string const& type)
{
	std::list<MotorVehicle::SPtr> foundVehicles;

	if(manufacturer == "")
	{
		if (type == "")
		{
			//no manufacturer or type is given -> all
			//available cars
			return list;
		}
		else
		{
			//search for type
			for(auto const& elem : list)
			{
				if(elem->GetType() == type)
				{
					foundVehicles.emplace_back(elem);
				}
			}
		}
	}
	else if (type == "")
	{
		//search for manufacturer
		for (auto const& elem : list)
		{
			if (elem->GetManufacturer() == manufacturer)
			{
				foundVehicles.emplace_back(elem);
			}
		}
	}
	else
	{
		//search for manufacturer and type
		for(auto const& elem : list)
		{
			if(elem->GetType() == type && elem->GetManufacturer() == manufacturer)
			{
				foundVehicles.emplace_back(elem);	
			}
		}	
	}
	return foundVehicles;
}

void CarRental::Add(MotorVehicle::SPtr const& car)
{
	if(car == nullptr)
	{
		throw string("null pointer in CarRental::Add");
	}

	mAvailable.emplace_back(car);
}

void CarRental::Reserve(MotorVehicle::SPtr const& car)
{
	if (car == nullptr)
	{
		throw string("null pointer in CarRental::Reserve");
	}

	list<MotorVehicle::SPtr>::iterator it;

	it = find(mAvailable.begin(), mAvailable.end(), car);
	if (it != mAvailable.end())
	{
		mAvailable.remove(car);
		mReserved.emplace_back(car);
	}
	else
	{
		cout << "Auto ist nicht zur Reservierung verfuegbar" << endl;
	}
}

void CarRental::Back(MotorVehicle::SPtr const& car)
{
	if (car == nullptr)
	{
		throw string("null pointer in CarRental::Back");
	}

	list<MotorVehicle::SPtr>::iterator it;

	it = find(mReserved.begin(), mReserved.end(), car);
	if (it != mReserved.end())
	{
		mReserved.remove(car);
		mAvailable.emplace_back(car);
	}
	else
	{
		cout << "Auto war nicht reserviert" << endl;
	}
}

std::list<MotorVehicle::SPtr> CarRental::GetAvailable(
				std::string const& manufacturer,
				std::string const& type) const
{
	return SearchCar(mAvailable, manufacturer, type);
}

std::list<MotorVehicle::SPtr> CarRental::GetReserved(
	std::string const& manufacturer,
	std::string const& type) const
{
	return SearchCar(mReserved, manufacturer, type);
}

void CarRental::PrintAvailable(std::ostream& ost) const
{
	for(auto& elem : mAvailable)
	{
		elem->Print(ost);
		ost << endl;
		ost << endl;
	}
}

void CarRental::PrintReserved(std::ostream& ost) const
{
	for(auto const& elem : mReserved)
	{
		elem->Print(ost);
		ost << endl;
		ost << endl;
	}
}