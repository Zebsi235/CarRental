////////////////////////////////
// Workfile : MidRangeCar.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing mid range car.
////////////////////////////////

#include "MidRangeCar.h"
using namespace std;

static size_t const price = 150;

MidRangeCar::MidRangeCar(std::string const& manufacturer,
	std::string const& type) :
	mManufacturer{ manufacturer }, mType{ type }
{
}

size_t MidRangeCar::GetPrice() const
{
	return price;
}

void MidRangeCar::Print(std::ostream& ost) const
{
	ost << "Mittelklasse - " << mManufacturer << " - " 
		<< mType << endl << "\tGrundpreis:\t\t  " << GetPrice() << " Euro";
}

std::string MidRangeCar::GetManufacturer() const
{
	return mManufacturer;
}

std::string MidRangeCar::GetType() const
{
	return mType;
}
