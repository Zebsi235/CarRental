////////////////////////////////
// Workfile : NavigationSystem.cpp
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator
////////////////////////////////

#include "NavigationSystem.h"
using namespace std;

static size_t const price = 20;

//assigns the Shared Ptr to mMotorVehicle
NavigationSystem::NavigationSystem(MotorVehicle::SPtr const& vehicle) : SpecialEquipment(vehicle)
{
}

//returns price of specific SpecialEquipment
size_t NavigationSystem::GetPrice() const
{
	return price;
}

//Prints the SpecialEquipment and the extra price of it
void NavigationSystem::Print(std::ostream& ost) const
{
	SpecialEquipment::Print(ost);
	ost << endl << "\tNavigationssystem:\t  +" << GetPrice() << " Euro";
}

//Needs to be implemented due to derivation of Base class
std::string NavigationSystem::GetManufacturer() const
{
	return SpecialEquipment::GetManufacturer();
}

//Needs to be implemented due to derivation of Base class
std::string NavigationSystem::GetType() const
{
	return SpecialEquipment::GetType();
}
