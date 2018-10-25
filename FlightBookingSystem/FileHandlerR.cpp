#include "FileHandlerR.h"



FileHandlerR::FileHandlerR()
{
	createReservations();
}

void FileHandlerR::createReservations()
{
	vector<string> fileContents = readFile("../Reservations.txt");

	for (int i = 0; i < fileContents.size(); i++)
	{
		reservations.push_back(Reservation(stoi(fileContents[i + 1]), fileContents[i + 2], fileContents[i + 3]));
		i += 3;
	}
}


FileHandlerR::~FileHandlerR()
{
}
