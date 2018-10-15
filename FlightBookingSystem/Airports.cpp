#include "stdafx.h"
#include "Airports.h"
#include <string>

using namespace std;

Airports::Airports(string name)
{
	_name = name;
}

void Airports::addFlight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable)
{
	_flights.push_back(Flights(flightCode, dateOfDeparture, expcTimeOfDepart, expectTimeofArrival, departureAirport, destinationAirport, connections, seatsBooked, seatsAvailable));
}

void Airports::addPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
{
	_flights[_flights.size() - 1].assignPlane(planeType, planeMake, planeModel, planeCallSign, totalSeats);
}

void Airports::assignReservationToFlight(string dateOfBooking)
{
	_flights[_flights.size() - 1].assignReservation(dateOfBooking);
}

void Airports::assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	_flights[_flights.size() - 1].assignCustomerToReservation(customerCode, customerName, customerAddress, customerPhone);
}

string Airports::getName()
{
	return _name;
}

vector<Flights> Airports::getFlights()
{
	return _flights;
}

Airports::~Airports()
{
}
