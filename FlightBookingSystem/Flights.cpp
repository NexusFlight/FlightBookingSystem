#include "stdafx.h"
#include "Flights.h"


Flights::Flights(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable)
{
	_flightCode = flightCode;
	_dateOfDeparture = dateOfDeparture;
	_expectTimeOfDepart = expcTimeOfDepart;
	_expectTimeofArrival = expectTimeofArrival;
	_departureAirport = departureAirport;
	_destinationAirport = destinationAirport;
	_connections = connections;
	_seatsBooked = seatsBooked;
	_seatsAvailable = seatsAvailable;
}

void Flights::assignPlane(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
{
	plane = new Planes(planeType, planeMake, planeModel, planeCallSign, totalSeats);
}

void Flights::assignReservation(string dateOfBooking)
{
	_reservations.push_back(Reservations(_flightCode, dateOfBooking, _dateOfDeparture));
}

void Flights::assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	_reservations[_reservations.size() - 1].assignCustomer(customerCode, customerName, customerAddress, customerPhone);
}

Flights::~Flights()
{
}


vector<string> Flights::toString()
{
	vector<string> value;
	value.push_back(to_string(_flightCode));
	value.push_back(_dateOfDeparture);
	value.push_back(to_string(_expectTimeOfDepart));
	value.push_back(to_string(_expectTimeofArrival));
	value.push_back(_departureAirport);
	value.push_back(_destinationAirport);
	value.push_back(_connections);
	value.push_back(to_string(_seatsBooked));
	value.push_back(to_string(_seatsAvailable));
	return value;
}

Planes* Flights::getPlane()
{
	return plane;
}

vector<Reservations> Flights::getReservations()
{
	return _reservations;
}

//int Flights::getFlightCode()
//{
//	return _flightCode;
//}
//
//string Flights::getDateOfDepature()
//{
//	return _dateOfDeparture;
//}
//
//float Flights::getExpectTimeOfDepart()
//{
//	return _expectTimeOfDepart;
//}
//
//float Flights::getExpectTimeOfArrival()
//{
//	return _expectTimeofArrival;
//}
//
//string Flights::getDepatureAirport()
//{
//	return _departureAirport;
//}
//
//string Flights::getDesinationAirport()
//{
//	return _destinationAirport;
//}
//
//string Flights::getConnections()
//{
//	return _connections;
//}
//
//int Flights::getSeatsBooked()
//{
//	return _seatsBooked;
//}
//
//int Flights::getSeatsAvailable()
//{
//	return _seatsAvailable;
//}
//


