#pragma once
#include "FileHandlerD.h"
#include "Flight.h"
class FileHandlerF :
	public FileHandlerD
{
	vector<Flight> flights;
	void createFlights();
public:
	FileHandlerF();
	vector<Flight> getFlights();
	~FileHandlerF();
};

