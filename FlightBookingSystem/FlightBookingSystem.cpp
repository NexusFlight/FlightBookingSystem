// FlightBookingSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "FileHandler.h"
#include <vector>
#include "Airport.h"
#include "FileHandlerC.h"
#include "FileHandlerA.h"
#include "FileHandlerF.h"
#include "FileHandlerP.h"
#include "FileHandlerR.h"
using namespace std;

int main()
{
	//FileHandlerC customers = FileHandlerC();
	//FileHandlerA airports = FileHandlerA();
	//FileHandlerF flights = FileHandlerF();
	//FileHandlerR reservations = FileHandlerR();
	FileHandlerP planes = FileHandlerP();

	/*FileHandler files = FileHandler();
	vector<Airports> airports = files.getAirports();
	files.~FileHandler();
	files.writeToFile(airports);*/




    return 0;
}

