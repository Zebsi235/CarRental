////////////////////////////////
// Workfile : Xenon.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator 
////////////////////////////////

#include "Xenon.h"

using namespace std;

static size_t const price = 10;

//assigns the Shared Ptr to mMotorVehicle
Xenon::Xenon(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

//returns price of specific SpecialEquipment
size_t Xenon::GetPrice() const
{
	return price;
}

//Prints the SpecialEquipment and the extra price of it
void Xenon::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << endl << "\tXenon Lichter:\t\t  +" << GetPrice() << " Euro";
}

//Needs to be implemented due to derivation of Base class
std::string Xenon::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

//Needs to be implemented due to derivation of Base classs
std::string Xenon::GetType() const
{
	return SpecialEquipment::GetType();
}
