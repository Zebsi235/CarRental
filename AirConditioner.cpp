////////////////////////////////
// Workfile : AirConditioner.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "AirConditioner.h"
using namespace std;

static size_t const price = 30;

AirConditioner::AirConditioner(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

size_t AirConditioner::GetPrice() const
{
	return price;
}

void AirConditioner::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << endl << "\tKlimaanlage elektronisch: +" << GetPrice() << " Euro";
}

std::string AirConditioner::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

std::string AirConditioner::GetType() const
{
	return SpecialEquipment::GetType();
}
