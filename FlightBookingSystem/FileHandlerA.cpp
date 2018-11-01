#include "FileHandlerA.h"



FileHandlerA::FileHandlerA()
{
	createAirports();
}

void FileHandlerA::createAirports()
{
	vector<string> fileContents = readFile("../Airports.txt");
	for (int i = 0; i < fileContents.size(); i++)
	{
		airports.push_back(Airport(fileContents[i + 1]));
		i++;
	}
}


vector<Airport> FileHandlerA::getAirports()
{
	return airports;
}


FileHandlerA::~FileHandlerA()
{
}
