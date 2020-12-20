////////////////////////////////
// Workfile : MotorVehicle.h
// Date : 19.12.2020
// Name : Michael Enzelsberger
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
	virtual std::string GetManufacturer() const = 0;
	virtual std::string GetType() const = 0;

	virtual ~MotorVehicle() = default;
	using SPtr = std::shared_ptr<MotorVehicle>;
};

#endif