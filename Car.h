////////////////////////////////
// Workfile : Car.h
// Date : 19.12.2020
// Name : Pascal Lang
// Description : car header
////////////////////////////////

#ifndef CAR_H
#define CAR_H

#include "MotorVehicle.h"
#include <iostream>

class Car: public MotorVehicle
{
public:
	size_t GetPrice() const override = 0;
	void Print(std::ostream& ost) const override;
	std::string GetManufacturer() const override = 0;
	std::string GetType() const override = 0;
	
private:
	std::string mManufacturer;
	std::string mType;
};

#endif