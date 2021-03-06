#include "FileHandlerF.h"



FileHandlerF::FileHandlerF()
{
	createFlights();
}

void FileHandlerF::createFlights()
{
	vector<string> fileContents = readFile("../Flights.txt");

	for (int i = 0; i < fileContents.size(); i++)
	{
		flights.push_back(Flight(stoi(fileContents[i + 1]), fileContents[i + 2], stof(fileContents[i + 3]), stof(fileContents[i + 4]), fileContents[i + 5], fileContents[i + 6], fileContents[i + 7], stoi(fileContents[i + 8]), stoi(fileContents[i + 9]),fileContents[i+10]));
		i += 10;
	}
}

vector<Flight> FileHandlerF::getFlights()
{
	return flights;
}

void FileHandlerF::writeChanges(vector<Flight> flights)
{
	vector<string> output;
	for (int i = 0; i < flights.size(); i++)
	{
		vector<string> flight = flights[i].toString();
		for (int j = 0; j < flight.size(); j++)
		{
			output.push_back(flight[j]);
		}
	}
	writeFile(output, "../Flights.txt");
}

FileHandlerF::~FileHandlerF()
{
}
