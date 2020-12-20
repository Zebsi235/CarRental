////////////////////////////////
// Workfile : CarRental.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Client class for managing the car rental
////////////////////////////////

#include "CarRental.h"
#include <list>
#include <iostream>

using namespace std;

//internal function searching for the specific type or manufacturer
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

//Adds vehicle or special equipment to mAvailable list 
void CarRental::Add(MotorVehicle::SPtr const& car)
{
	if(car == nullptr)
	{
		throw string("null pointer in CarRental::Add");
	}

	mAvailable.emplace_back(car);
}

//searches for a car in the list and reserves it 
//if its found
void CarRental::Reserve(MotorVehicle::SPtr const& car)
{
	if (car == nullptr)
	{
		throw string("null pointer in CarRental::Reserve");
	}

	list<MotorVehicle::SPtr>::iterator it;

	//search mAvailable list 
	it = find(mAvailable.begin(), mAvailable.end(), car);
	//if car is found
	if (it != mAvailable.end())
	{
		//remove it in mAvailable
		mAvailable.remove(car);
		//add it to the mReserved list
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

	//search mReserved list 
	it = find(mReserved.begin(), mReserved.end(), car);
	//if car is found
	if (it != mReserved.end())
	{
		//remove it in mReserved
		mReserved.remove(car);
		//add it to the mAvailable list
		mAvailable.emplace_back(car);
	}
	else
	{
		cout << "Auto war nicht reserviert" << endl;
	}
}

//uses internal function to search for cars 
//and return them (in mAvailable)
std::list<MotorVehicle::SPtr> CarRental::GetAvailable(
				std::string const& manufacturer,
				std::string const& type) const
{
	return SearchCar(mAvailable, manufacturer, type);
}

//uses internal function to search for cars 
//and return them (in mReserved)
std::list<MotorVehicle::SPtr> CarRental::GetReserved(
	std::string const& manufacturer,
	std::string const& type) const
{
	return SearchCar(mReserved, manufacturer, type);
}

//Prints all cars in mAvailable 
void CarRental::PrintAvailable(std::ostream& ost) const
{
	for(auto& elem : mAvailable)
	{
		elem->Print(ost);
		ost << endl;
		ost << endl;
	}
}

//Prints all cars in mReserved
void CarRental::PrintReserved(std::ostream& ost) const
{
	for(auto const& elem : mReserved)
	{
		elem->Print(ost);
		ost << endl;
		ost << endl;
	}
}