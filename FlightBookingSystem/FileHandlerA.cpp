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

void FileHandlerA::writeChanges(vector<Airport> airports)
{
	vector<string> output;
	for (int i = 0; i < airports.size(); i++)
	{
		vector<string> airport = airports[i].toString();
		for (int j = 0; j < airport.size(); j++)
		{
			output.push_back(airport[j]);
		}
	}
	writeFile(output, "../Airports.txt");
}


FileHandlerA::~FileHandlerA()
{
}
