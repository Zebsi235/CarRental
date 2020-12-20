////////////////////////////////
// Workfile : CruiseControl.h
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator Header
////////////////////////////////

#ifndef CRUISECONTROL_H
#define CRUISECONTROL_H

#include "SpecialEquipment.h"

class CruiseControl : public SpecialEquipment
{
public:
	CruiseControl(MotorVehicle::SPtr const& vehicle);
	size_t GetPrice() const override;
	void Print(std::ostream& ost) const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;
};

#endif