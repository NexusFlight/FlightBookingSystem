#include "stdafx.h"
#include "Flights.h"


Flights::Flights(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable)
{
	_flightCode = flightCode;
	_dateOfDeparture = dateOfDeparture;
	_expcTimeOfDepart = expcTimeOfDepart;
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
	reservations.push_back(Reservations(_flightCode, dateOfBooking, _dateOfDeparture));
}

void Flights::assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	reservations[reservations.size() - 1].assignCustomer(customerCode, customerName, customerAddress, customerPhone);
}

Flights::~Flights()
{
}
