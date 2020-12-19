////////////////////////////////
// Workfile : main.cpp
// Date : 19.12.2020
// Description : Testing Driver
////////////////////////////////

#include <iostream>
#include <cassert>
#include <string>
//#include <vld.h>

using namespace std;

int main()
{
	try
	{

	}
	catch (string const& error)
	{
		assert(!error.empty());
		cerr << error << endl;

		return 1; // Programm mit Fehlercode beenden
	}
	catch (bad_alloc const& error)
	{
		cerr << "memory allocation: " << error.what() << endl;

		return 1;
	}
	catch (exception const& error)
	{
		cerr << "standard exception: " << error.what() << endl;

		return 1;
	}
	catch (...)
	{
		cerr << "unhandled exception" << endl;

		return 1;
	}

	return 0;
}