////////////////////////////////
// Workfile : AirConditioner.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "AirConditioner.h"

static size_t const price = 5;

AirConditioner::AirConditioner(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

size_t AirConditioner::GetPrice() const
{
	return price;
}

void AirConditioner::Print(std::ostream& ost) const
{
	ost << "Klimaanlage vohanden";
	return;
}

std::string AirConditioner::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

std::string AirConditioner::GetType() const
{
	return SpecialEquipment::GetType();
}
