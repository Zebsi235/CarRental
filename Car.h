////////////////////////////////
// Workfile : Car.h
// Date : 19.12.2020
// Name : Pascal Lang
// Description : concrete component base class
////////////////////////////////

#ifndef CAR_H
#define CAR_H

#include "MotorVehicle.h"
#include <iostream>

//base class for the different types of cars
class Car: public MotorVehicle
{
public:
	size_t GetPrice() const override = 0;
	void Print(std::ostream& ost) const override = 0;

	//returns the private members
	std::string GetManufacturer() const override = 0;
	std::string GetType() const override = 0;
	
private:
	std::string mManufacturer;
	std::string mType;
};

#endif