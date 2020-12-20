////////////////////////////////
// Workfile : PremiumCar.h
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing premium cars.
////////////////////////////////

#ifndef PREMIUMCAR_H
#define PREMIUMCAR_H

#include "Car.h"

class PremiumCar : public Car
{
public:
	PremiumCar(std::string const& manufacturer, std::string const& type);
	size_t GetPrice() const override;
	void Print(std::ostream& ost) const override;
	std::string GetManufacturer() const override;
	std::string GetType() const override;

private:
	std::string mManufacturer;
	std::string mType;
};

#endif