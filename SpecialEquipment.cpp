////////////////////////////////
// Workfile : SpecialEquipment.cpp
// Date : 19.12.2020
// Name : Pascal Lang
// Description : Decorater Class for Special Equipment
////////////////////////////////

#include "SpecialEquipment.h"
#include <iostream>
#include <string>

using namespace std;

SpecialEquipment::SpecialEquipment(MotorVehicle::SPtr const& vehicle)
{
	if(vehicle == nullptr)
	//check for nullpointer
	{
		throw string("null pointer in CTor SpecialEquipment");
	}
	//assignes the given special-equipment or car to the internal member 
	mMotorVehicle = vehicle;
}

size_t SpecialEquipment::GetPrice() const
{	
	//calls the GetPrice()-method of the stored object
	return mMotorVehicle->GetPrice();
}

void SpecialEquipment::Print(std::ostream& ost) const 
{	
	//calls the Print()-method of the stored object
	mMotorVehicle->Print(ost);
}

std::string SpecialEquipment::GetManufacturer() const
{
	//calls the GetManufacturer()-method of the stored object
	return mMotorVehicle->GetManufacturer();
}

std::string SpecialEquipment::GetType() const
{
	//calls the GetType()-method of the stored object
	return mMotorVehicle->GetType();
}
