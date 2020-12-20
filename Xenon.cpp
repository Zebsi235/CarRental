////////////////////////////////
// Workfile : Xenon.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator 
////////////////////////////////

#include "Xenon.h"

static size_t const price = 3;

Xenon::Xenon(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

size_t Xenon::GetPrice() const
{
	return price;
}

void Xenon::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << " - Xenon Lichter vohanden";
	return;
}

std::string Xenon::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

std::string Xenon::GetType() const
{
	return SpecialEquipment::GetType();
}
