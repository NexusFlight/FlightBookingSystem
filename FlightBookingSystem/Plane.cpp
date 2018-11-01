#include "stdafx.h"
#include "Plane.h"

Plane::Plane()
{
}

Plane::Plane(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
{
	_planeType = planeType;
	_planeMake = planeMake;
	_planeModel = planeModel;
	_planeCallSign = planeCallSign;
	_totalSeats = totalSeats;
}

vector<string> Plane::toString()
{
	vector<string> value;
	value.push_back(_planeType);
	value.push_back(_planeMake);
	value.push_back(_planeModel);
	value.push_back(_planeCallSign);
	value.push_back(to_string(_totalSeats));
	return value;
}

string Plane::getCallSign()
{
	return _planeCallSign;
}

Plane::~Plane()
{
}
