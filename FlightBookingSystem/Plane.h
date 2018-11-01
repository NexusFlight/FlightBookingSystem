#pragma once
#include <string>
#include <vector>
using namespace std;

class Plane
{
	string _planeType;
	string _planeMake;
	string _planeModel;
	string _planeCallSign;
	int _totalSeats;
public:
	Plane();
	Plane(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	vector<string> toString();
	string getCallSign();
	~Plane();
};

