////////////////////////////////
// Workfile : SUV.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing SUVs.
////////////////////////////////

#include "SUV.h"
using namespace std;

static size_t const price = 200;

//ctor for setting manufacturer and type
SUV::SUV(std::string const& manufacturer,
	std::string const& type) :
	mManufacturer{ manufacturer }, mType{ type }
{
}

//get constant price for suvs
size_t SUV::GetPrice() const
{
	return price;
}

//print specific information for suvs including base price
void SUV::Print(std::ostream& ost) const
{
	ost << "SUV - " << mManufacturer << " - "
		<< mType << endl << "\tGrundpreis:\t\t  " << GetPrice() << " Euro";
}

//returns string of manufacturer
std::string SUV::GetManufacturer() const
{
	return mManufacturer;
}

//returns string of car type
std::string SUV::GetType() const
{
	return mType;
}
