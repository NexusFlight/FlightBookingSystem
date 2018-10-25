#include "FileHandlerF.h"



FileHandlerF::FileHandlerF()
{
}

void FileHandlerF::createFlights()
{
	vector<string> fileContents = readFile("../Flights.txt");
	vector<Flight> flights;

}


FileHandlerF::~FileHandlerF()
{
}
