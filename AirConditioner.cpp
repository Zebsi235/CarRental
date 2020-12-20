////////////////////////////////
// Workfile : AirConditioner.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "AirConditioner.h"
using namespace std;

static size_t const price = 30;

//assigns the Shared Ptr to mMotorVehicle
AirConditioner::AirConditioner(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

//returns price of specific SpecialEquipment
size_t AirConditioner::GetPrice() const
{
	return price;
}

//Prints the SpecialEquipment and the extra price of it
void AirConditioner::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << endl << "\tKlimaanlage elektronisch: +" << GetPrice() << " Euro";
}

//Needs to be implemented due to derivation of Base class
std::string AirConditioner::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

//Needs to be implemented due to derivation of Base class
std::string AirConditioner::GetType() const
{
	return SpecialEquipment::GetType();
}
