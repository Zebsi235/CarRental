////////////////////////////////
// Workfile : NavigationSystem.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "NavigationSystem.h"
using namespace std;

static size_t const price = 20;

NavigationSystem::NavigationSystem(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

size_t NavigationSystem::GetPrice() const
{
	return price;
}

void NavigationSystem::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << " - Navigationssystem: +" << GetPrice() << " Euro";
}

std::string NavigationSystem::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

std::string NavigationSystem::GetType() const
{
	return SpecialEquipment::GetType();
}
