////////////////////////////////
// Workfile : PremiumCar.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing premium cars.
////////////////////////////////

#include "PremiumCar.h"
using namespace std;

static size_t const price = 250;

//ctor for setting manufacturer and type
PremiumCar::PremiumCar(std::string const& manufacturer,
	std::string const& type) :
	mManufacturer{ manufacturer }, mType{ type }
{
}

//get constant price for premium cars
size_t PremiumCar::GetPrice() const
{
	return price;
}

//print specific information for premium cars including base price
void PremiumCar::Print(std::ostream& ost) const
{
	ost << "Premium - " << mManufacturer << " - "
		<< mType << endl << "\tGrundpreis:\t\t  " << GetPrice() << " Euro";
}

//returns string of manufacturer
std::string PremiumCar::GetManufacturer() const
{
	return mManufacturer;
}

//returns string of car type
std::string PremiumCar::GetType() const
{
	return mType;
}