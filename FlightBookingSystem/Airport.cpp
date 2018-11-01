#include "stdafx.h"
#include "Airport.h"
#include <string>

using namespace std;

Airport::Airport()
{
}

Airport::Airport(string name)
{
	_name = name;
}


string Airport::getName()
{
	return _name;
}

vector<string> Airport::toString()
{
	vector<string> value;
	value.push_back("[Airport Name]");
	value.push_back("AirportName:"+_name);
	return value;
}

Airport::~Airport()
{
}

//void Airport::addFlight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable)
//{
//	_flights.push_back(Flight(flightCode, dateOfDeparture, expcTimeOfDepart, expectTimeofArrival, departureAirport, destinationAirport, connections, seatsBooked, seatsAvailable));
//}
//
//void Airport::addPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
//{
//	_flights[_flights.size() - 1].assignPlane(planeType, planeMake, planeModel, planeCallSign, totalSeats);
//}
//
//void Airport::assignReservationToFlight(string dateOfBooking)
//{
//	_flights[_flights.size() - 1].assignReservation(dateOfBooking);
//}
//
//void Airport::assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone)
//{
//	_flights[_flights.size() - 1].assignCustomerToReservation(customerCode, customerName, customerAddress, customerPhone);
//}
//vector<Flight> Airport::getFlights()
//{
//	return _flights;
//}