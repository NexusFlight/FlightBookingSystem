#include "stdafx.h"
#include "Reservations.h"


Reservations::Reservations(int flightCode, string dateOfBooking, string dateOfDeparture)
{
	_flightCode = flightCode;
	_dateOfBooking = dateOfBooking;
	_dateOfDeparture = dateOfDeparture;
}

void Reservations::assignCustomer(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	customer = new Customers(customerCode, customerName, customerAddress, customerPhone);
}

Customers* Reservations::getCustomer()
{
	return customer;
}

string Reservations::toString()
{
	return _dateOfBooking;
}

Reservations::~Reservations()
{
}
