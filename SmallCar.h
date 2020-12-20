////////////////////////////////
// Workfile : SmallCar.h
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing small cars.
////////////////////////////////

#ifndef SMALLCAR_H
#define SMALLCAR_H

#include "Car.h"

class SmallCar : public Car
{
public:
	//custom ctor which sets mManufacturer and mType
	SmallCar(std::string const& manufacturer, std::string const& type);

	//overwritten Get and Print functions
	size_t GetPrice() const override;
	void Print(std::ostream& ost) const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;

private:
	std::string mManufacturer;
	std::string mType;
};

#endif