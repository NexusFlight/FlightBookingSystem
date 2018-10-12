#pragma once
#include <string>
#include <vector>
#include "Customers.h"

using namespace std;

class Reservations
{
	int _flightCode;
	string _dateOfBooking;
	string _dateOfDeparture;
	Customers *customer;
public:
	Reservations();
	Reservations(int flightCode, string dateOfBooking, string dateOfDeparture);
	void assignCustomer(int customerCode, string customerName, string customerAddress, string customerPhone);
	~Reservations();
};

