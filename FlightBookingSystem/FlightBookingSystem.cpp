// FlightBookingSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "FileHandler.h"
#include <vector>
#include "Airports.h"
#include "FileHandlerC.h"
#include "FileHandlerA.h"

using namespace std;

int main()
{
	//FileHandlerC customers = FileHandlerC();
	FileHandlerA airports = FileHandlerA();

	/*FileHandler files = FileHandler();
	vector<Airports> airports = files.getAirports();
	files.~FileHandler();
	files.writeToFile(airports);*/




    return 0;
}

