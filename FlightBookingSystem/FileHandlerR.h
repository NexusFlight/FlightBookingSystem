#pragma once
#include "FileHandlerD.h"
#include "Reservation.h"
class FileHandlerR :
	public FileHandlerD
{
	vector<Reservation> reservations;
	void createReservations();
public:
	FileHandlerR();
	vector<Reservation> getReservations();
	void writeChanges(vector<Reservation> reservations);
	~FileHandlerR();
};

