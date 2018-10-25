#pragma once
#include "FileHandlerD.h"
#include "Plane.h"
class FileHandlerP :
	public FileHandlerD
{
	vector<Plane> planes;
public:
	FileHandlerP();
	void createPlanes();
	~FileHandlerP();
};

