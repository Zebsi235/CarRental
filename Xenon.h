////////////////////////////////
// Workfile : Xenon.h
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Concrete Decorator Header
////////////////////////////////

#ifndef XENON_H
#define XENON_H

#include "SpecialEquipment.h"

class Xenon : public SpecialEquipment
{
public:
	//custom CTor
	Xenon(MotorVehicle::SPtr const& vehicle);

	//Get functions
	size_t GetPrice() const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;

	//Print functions
	void Print(std::ostream& ost) const override;
};

#endif