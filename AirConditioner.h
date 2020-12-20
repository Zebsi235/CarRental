////////////////////////////////
// Workfile : AirConditioner.h
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator Header
////////////////////////////////

#ifndef AIRCONDITIONER_H
#define AIRCONDITIONER_H

#include "SpecialEquipment.h"

class AirConditioner : public SpecialEquipment
{
public:
	AirConditioner(MotorVehicle::SPtr const& vehicle);
	size_t GetPrice() const override;
	void Print(std::ostream& ost) const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;
};

#endif