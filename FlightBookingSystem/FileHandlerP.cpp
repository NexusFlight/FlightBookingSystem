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


FileHandlerP::~FileHandlerP()
{
}
