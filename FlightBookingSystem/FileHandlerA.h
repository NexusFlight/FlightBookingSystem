#pragma once
#include "FileHandlerD.h"
#include "Airports.h"
class FileHandlerA :
	public FileHandlerD
{
	void createAirports();
public:
	FileHandlerA();
	~FileHandlerA();
};

