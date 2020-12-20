////////////////////////////////
// Workfile : CruiseControl.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "CruiseControl.h"
using namespace std;

static size_t const price = 10;

//assigns the Shared Ptr to mMotorVehicle
CruiseControl::CruiseControl(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

//returns price of specific SpecialEquipment
size_t CruiseControl::GetPrice() const
{
	return price;
}

//Prints the SpecialEquipment and the extra price of it
void CruiseControl::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << endl << "\tTempomat:\t\t  +" << GetPrice() << " Euro";
}

//Needs to be implemented due to derivation of Base class
std::string CruiseControl::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

//Needs to be implemented due to derivation of Base class
std::string CruiseControl::GetType() const
{
	return SpecialEquipment::GetType();
}
