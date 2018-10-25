#include "FileHandlerA.h"



FileHandlerA::FileHandlerA()
{
	createAirports();
}

void FileHandlerA::createAirports()
{
	vector<string> fileContents = readFile("../Airports.txt");
	vector<Airports> airports;
	for (int i = 0; i < fileContents.size(); i++)
	{
		airports.push_back(Airports(fileContents[i + 1]));
		i++;
	}
}

FileHandlerA::~FileHandlerA()
{
}
