////////////////////////////////
// Workfile : CruiseControl.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "CruiseControl.h"
using namespace std;

static size_t const price = 10;

CruiseControl::CruiseControl(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

size_t CruiseControl::GetPrice() const
{
	return price;
}

void CruiseControl::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << endl << "\tTempomat:\t\t  +" << GetPrice() << " Euro";
}

std::string CruiseControl::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

std::string CruiseControl::GetType() const
{
	return SpecialEquipment::GetType();
}
