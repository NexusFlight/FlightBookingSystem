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
	int _customerCode;
public:
	Reservation();
	Reservation(int flightCode, string dateOfBooking, string dateOfDeparture, int customerCode);
	string toString();
	int getCustomerCode();
	int getFlightCode();
	~Reservation();
	//void assignCustomer(int customerCode, string customerName, string customerAddress, string customerPhone);
	//Customer * getCustomer();
};

