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
	NavigationSystem(MotorVehicle::SPtr const& vehicle);
	size_t GetPrice() const override;
	void Print(std::ostream& ost) const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;
};

#endif