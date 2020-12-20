////////////////////////////////
// Workfile : SpecialEquipment.h
// Date : 19.12.2020
// Name : Pascal Lang
// Description : Decorator for Special Equipment
////////////////////////////////

#ifndef SPECIALEQUIPMENT_H
#define SPECIALEQUIPMENT_H

#include "Object.h"
#include "MotorVehicle.h"
#include <fstream>

class SpecialEquipment : public Object, public MotorVehicle
{
public:
	
	size_t GetPrice() const override;
	void Print(std::ostream& ost) const override;

	//method to return the private members 
	//of the stored shared pointer
	std::string GetManufacturer() const override;
	std::string GetType() const override;

protected:
	SpecialEquipment(MotorVehicle::SPtr const& vehicle);

private:
	//stores a Pointer to a car, or another special equipment
	//(decorator pattern)
	 MotorVehicle::SPtr mMotorVehicle;
};

#endif