#include "stdafx.h"
#include "Planes.h"


Planes::Planes(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
{
	_planeType = planeType;
	_planeMake = planeMake;
	_planeModel = planeModel;
	_planeCallSign = planeCallSign;
	_totalSeats = totalSeats;
}


Planes::~Planes()
{
}
