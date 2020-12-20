////////////////////////////////
// Workfile : CarRental.h
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : 
////////////////////////////////

#ifndef CARRENTAL_H
#define CARRENTAL_H

#include "Object.h"
#include "MotorVehicle.h"
#include <list>

class CarRental : public Object
{
public:
	void Add(MotorVehicle::SPtr const& car);
	void Reserve(MotorVehicle::SPtr const& car);
	void Back(MotorVehicle::SPtr const& car);

	std::list<MotorVehicle::SPtr> GetAvailable(std::string const& manufacturer = "",
		std::string const& type = "") const;
	std::list<MotorVehicle::SPtr> GetReserved(std::string const& manufacturer = "",
		std::string const& type = "") const;

	void PrintAvailable(std::ostream& ost) const;
	void PrintReserved(std::ostream& ost) const;

private:
	std::list<MotorVehicle::SPtr> mAvailable;
	std::list<MotorVehicle::SPtr> mReserved;
};

#endif