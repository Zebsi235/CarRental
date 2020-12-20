////////////////////////////////
// Workfile : SUV.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing SUVs.
////////////////////////////////

#include "SUV.h"
using namespace std;

static size_t const price = 200;

SUV::SUV(std::string const& manufacturer,
	std::string const& type) :
	mManufacturer{ manufacturer }, mType{ type }
{
}

size_t SUV::GetPrice() const
{
	return price;
}

void SUV::Print(std::ostream& ost) const
{
	ost << "SUV - " << mManufacturer << " - " << mType;
}

std::string SUV::GetManufacturer() const
{
	return mManufacturer;
}

std::string SUV::GetType() const
{
	return mType;
}
