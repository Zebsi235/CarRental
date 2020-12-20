////////////////////////////////
// Workfile : NavigationSystem.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "NavigationSystem.h"

static size_t const price = 15;

NavigationSystem::NavigationSystem(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

size_t NavigationSystem::GetPrice() const
{
	//SpecialEquipment::GetPrice();
	return price;
}

void NavigationSystem::Print(std::ostream& ost) const
{
	ost << "Navigationssystem vohanden";
	return;
}

std::string NavigationSystem::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

std::string NavigationSystem::GetType() const
{
	return SpecialEquipment::GetType();
}
