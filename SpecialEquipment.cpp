////////////////////////////////
// Workfile : SpecialEquipment.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Decorater Class for Special Equipment
////////////////////////////////

#include "SpecialEquipment.h"
#include <iostream>
#include <string>

using namespace std;

SpecialEquipment::SpecialEquipment(MotorVehicle::SPtr const& vehicle)
{
	if(vehicle == nullptr)
	{
		throw string("null pointer in CTor SpecialEquipment");
	}
	mMotorVehicle = vehicle;
}

size_t SpecialEquipment::GetPrice() const
{
	return mMotorVehicle->GetPrice();
}

void SpecialEquipment::Print(std::ostream& ost) const 
{
	mMotorVehicle->Print(ost);
}

std::string SpecialEquipment::GetManufacturer() const
{
	return mMotorVehicle->GetManufacturer();
}

std::string SpecialEquipment::GetType() const
{
	return mMotorVehicle->GetType();
}
