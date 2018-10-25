#include "stdafx.h"
#include "Reservation.h"


Reservation::Reservation(int flightCode, string dateOfBooking, string dateOfDeparture)
{
	_flightCode = flightCode;
	_dateOfBooking = dateOfBooking;
	_dateOfDeparture = dateOfDeparture;
}

void Reservation::assignCustomer(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	customer = new Customer(customerCode, customerName, customerAddress, customerPhone);
}

Customer* Reservation::getCustomer()
{
	return customer;
}

string Reservation::toString()
{
	return _dateOfBooking;
}

Reservation::~Reservation()
{
}
