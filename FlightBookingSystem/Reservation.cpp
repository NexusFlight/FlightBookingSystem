#include "stdafx.h"
#include "Reservation.h"


Reservation::Reservation(int flightCode, string dateOfBooking, string dateOfDeparture,int customerCode)
{
	_flightCode = flightCode;
	_dateOfBooking = dateOfBooking;
	_dateOfDeparture = dateOfDeparture;
	_customerCode = customerCode;
}

string Reservation::toString()
{
	return _dateOfBooking;
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