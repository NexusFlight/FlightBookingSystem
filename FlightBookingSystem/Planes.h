#pragma once
#include <string>

using namespace std;

class Planes
{
	string _planeType;
	string _planeMake;
	string _planeModel;
	string _planeCallSign;
	int _totalSeats;
public:
	Planes();
	Planes(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	~Planes();
};

