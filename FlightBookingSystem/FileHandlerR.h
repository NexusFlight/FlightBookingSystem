#pragma once
#include "FileHandlerD.h"
#include "Reservation.h"
class FileHandlerR :
	public FileHandlerD
{
	vector<Reservation> reservations;
public:
	FileHandlerR();
	void createReservations();
	~FileHandlerR();
};

