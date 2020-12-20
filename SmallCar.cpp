////////////////////////////////
// Workfile : SmallCar.cpp
// Date : 19.12.2020
// Name : Michael Enzelsberger
// Description : Concrete Component representing small cars.
////////////////////////////////

#include "SmallCar.h"
using namespace std;

static size_t const price = 100;

//ctor for setting manufacturer and type
SmallCar::SmallCar(std::string const& manufacturer, 
	std::string const& type) : 
	mManufacturer{manufacturer}, mType{type}
{
}

//get constant price for small cars
size_t SmallCar::GetPrice() const
{
	return price;
}

//print specific information for small cars including base price
void SmallCar::Print(std::ostream& ost) const
{
	ost << "Kleinwagen - " << mManufacturer << " - "
		<< mType << endl << "\tGrundpreis:\t\t  " << GetPrice() << " Euro";
}

//returns string of manufacturer
std::string SmallCar::GetManufacturer() const
{
	return mManufacturer;
}

//returns string of car type
std::string SmallCar::GetType() const
{
	return mType;
}