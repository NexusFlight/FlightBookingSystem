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
	flights.push_back(Flights(flightCode, dateOfDeparture, expcTimeOfDepart, expectTimeofArrival, departureAirport, destinationAirport, connections, seatsBooked, seatsAvailable));
}

void Airports::addPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
{
	flights[flights.size() - 1].assignPlane(planeType, planeMake, planeModel, planeCallSign, totalSeats);
}

void Airports::assignReservationToFlight(string dateOfBooking)
{
	flights[flights.size() - 1].assignReservation(dateOfBooking);
}

void Airports::assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	flights[flights.size() - 1].assignCustomerToReservation(customerCode, customerName, customerAddress, customerPhone);
}

Airports::~Airports()
{
}
