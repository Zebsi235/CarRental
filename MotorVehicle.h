////////////////////////////////
// Workfile : MotorVehicle.h
// Date : 19.12.2020
// Name : Pascal Lang
// Description : Component Interface for Motor Vehicles.
////////////////////////////////

#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

#include <memory.h>
#include <iostream>

class MotorVehicle
{
public:

	virtual size_t GetPrice() const = 0;
	virtual void Print(std::ostream & ost) const = 0;

	//are needed to print these details about a car
	virtual std::string GetManufacturer() const = 0;
	virtual std::string GetType() const = 0;

	//virtual destructor
	virtual ~MotorVehicle() = default;

	//is used for the decorator-pattern
	using SPtr = std::shared_ptr<MotorVehicle>;
};

#endif