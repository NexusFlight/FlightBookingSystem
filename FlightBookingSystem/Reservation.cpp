#include "stdafx.h"
#include "Reservation.h"


Reservation::Reservation(int flightCode, string dateOfBooking, string dateOfDeparture,int customerCode)
{
	_flightCode = flightCode;
	_dateOfBooking = dateOfBooking;
	_dateOfDeparture = dateOfDeparture;
	_customerCode = customerCode;
}

vector<string> Reservation::toString()
{
	vector<string> value;
	value.push_back("[Reservation Details]");
	value.push_back("FlightCode:"+to_string(_flightCode));
	value.push_back("DateOfBooking:"+_dateOfBooking);
	value.push_back("DateOfTravel:"+_dateOfDeparture);
	value.push_back("CustomerCode:"+to_string(_customerCode));
	return value;
}

int Reservation::getCustomerCode()
{
	return _customerCode;
}

int Reservation::getFlightCode()
{
	return _flightCode;
}

Reservation::~Reservation()
{
}

//void Reservation::assignCustomer(int customerCode, string customerName, string customerAddress, string customerPhone)
//{
//	customer = new Customer(customerCode, customerName, customerAddress, customerPhone);
//}
//
//Customer* Reservation::getCustomer()
//{
//	return customer;
//}