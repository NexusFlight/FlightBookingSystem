#pragma once
#include "FileHandlerD.h"
#include "Airport.h"
class FileHandlerA :
	public FileHandlerD
{
	vector<Airport> airports;
	void createAirports();
public:
	vector<Airport> getAirports();
	void writeChanges(vector<Airport> airports);
	FileHandlerA();
	~FileHandlerA();
};

