////////////////////////////////
// Workfile : SmallCar.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing small cars.
////////////////////////////////

#include "SmallCar.h"
using namespace std;

static size_t const price = 50;

SmallCar::SmallCar(std::string const& manufacturer, 
	std::string const& type) : 
	mManufacturer{manufacturer}, mType{type}
{
}

size_t SmallCar::GetPrice() const
{
	return price;
}

void SmallCar::Print(std::ostream& ost) const
{
	ost << "SmallCar - " << mManufacturer << " - " << 
		mType << " - " << price  << " Euro pro Tag" << endl;
}

std::string SmallCar::GetManufacturer() const
{
	return mManufacturer;
}

std::string SmallCar::GetType() const
{
	return mType;
}