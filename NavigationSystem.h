////////////////////////////////
// Workfile : NavigationSystem.h
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator Header
////////////////////////////////

#ifndef NAVIGATIONSYSTEM_H
#define NAVIGATIONSYSTEM_H

#include "SpecialEquipment.h"

class NavigationSystem : public SpecialEquipment
{
public:
	//custom CTor
	NavigationSystem(MotorVehicle::SPtr const& vehicle);

	//Get functions
	size_t GetPrice() const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;

	//Print function
	void Print(std::ostream& ost) const override;
};

#endif