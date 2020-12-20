////////////////////////////////
// Workfile : SpecialEquipment.h
// Date : 19.12.2020
// Name : Sebastian Mueck
// Description : Template class for Special Equipments
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
	std::string GetManufacturer() const override;
	std::string GetType() const override;

protected:
	SpecialEquipment(MotorVehicle::SPtr const& vehicle);

private:
	 MotorVehicle::SPtr mMotorVehicle;
};

#endif