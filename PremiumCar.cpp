////////////////////////////////
// Workfile : PremiumCar.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing premium cars.
////////////////////////////////

#include "PremiumCar.h"
using namespace std;

static size_t const price = 200;

PremiumCar::PremiumCar(std::string const& manufacturer,
	std::string const& type) :
	mManufacturer{ manufacturer }, mType{ type }
{
}

size_t PremiumCar::GetPrice() const
{
	return price;
}

void PremiumCar::Print(std::ostream& ost) const
{
	ost << "Premium - " << mManufacturer << " - " << mType;
}

std::string PremiumCar::GetManufacturer() const
{
	return mManufacturer;
}

std::string PremiumCar::GetType() const
{
	return mType;
}