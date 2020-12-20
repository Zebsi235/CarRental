////////////////////////////////
// Workfile : MidRangeCar.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing mid range car.
////////////////////////////////

#include "MidRangeCar.h"
using namespace std;

static size_t const price = 150;

//ctor for setting manufacturer and type
MidRangeCar::MidRangeCar(std::string const& manufacturer,
	std::string const& type) :
	mManufacturer{ manufacturer }, mType{ type }
{
}

//get constant price for mid range cars
size_t MidRangeCar::GetPrice() const
{
	return price;
}

//print specific information for mid range cars including base price
void MidRangeCar::Print(std::ostream& ost) const
{
	ost << "Mittelklasse - " << mManufacturer << " - " 
		<< mType << endl << "\tGrundpreis:\t\t  " << GetPrice() << " Euro";
}

//returns string of manufacturer
std::string MidRangeCar::GetManufacturer() const
{
	return mManufacturer;
}

//returns string of car type
std::string MidRangeCar::GetType() const
{
	return mType;
}
