// FlightBookingSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "FileHandler.h"
#include <vector>
#include "Airports.h"

using namespace std;

int main()
{
	FileHandler files = FileHandler();
	vector<Airports> airports = files.getAirports();
	files.~FileHandler();



    return 0;
}

