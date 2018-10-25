#pragma once
#include <string>
#include <vector>
#include "Customer.h"

using namespace std;

class Reservation
{
	int _flightCode;
	string _dateOfBooking;
	string _dateOfDeparture;
	Customer *customer;
public:
	Reservation();
	Reservation(int flightCode, string dateOfBooking, string dateOfDeparture);
	void assignCustomer(int customerCode, string customerName, string customerAddress, string customerPhone);
	Customer * getCustomer();
	string toString();
	~Reservation();
};

