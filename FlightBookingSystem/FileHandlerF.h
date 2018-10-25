#pragma once
#include "FileHandlerD.h"
#include "Flights.h"
class FileHandlerF :
	public FileHandlerD
{
	void createFlights();
public:
	FileHandlerF();
	~FileHandlerF();
};

