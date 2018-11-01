#pragma once
#include "FileHandlerD.h"
#include "Plane.h"
class FileHandlerP :
	public FileHandlerD
{
	vector<Plane> planes;
	void createPlanes();
public:
	FileHandlerP();
	vector<Plane> getPlanes();
	void writeChanges(vector<Plane> planes);
	~FileHandlerP();
};

