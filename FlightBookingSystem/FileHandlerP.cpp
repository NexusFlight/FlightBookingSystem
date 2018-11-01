#include "FileHandlerP.h"



FileHandlerP::FileHandlerP()
{
	createPlanes();
}

void FileHandlerP::createPlanes()
{
	vector<string> fileContents = readFile("../Planes.txt");

	for (int i = 0; i < fileContents.size(); i++)
	{
		planes.push_back(Plane(fileContents[i + 1], fileContents[i + 2], fileContents[i + 3], fileContents[i + 4], stoi(fileContents[i + 5])));
		i += 5;
	}
}

vector<Plane> FileHandlerP::getPlanes()
{
	return planes;
}

void FileHandlerP::writeChanges(vector<Plane> planes)
{
	vector<string> output;
	for (int i = 0; i < planes.size(); i++)
	{
		vector<string> plane = planes[i].toString();
		for (int j = 0; j < plane.size(); j++)
		{
			output.push_back(plane[j]);
		}
	}
	writeFile(output, "../Planes.txt");
}

FileHandlerP::~FileHandlerP()
{
}
