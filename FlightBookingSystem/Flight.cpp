#include "stdafx.h"
#include "Flight.h"

Flight::Flight()
{
}

Flight::Flight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable,string callSign)
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
	_callSign = callSign;
}

int Flight::getFlightCode()
{
	return _flightCode;
}
string Flight::getDepatureAirport()
{
	return _departureAirport;
}
string Flight::getDestinationAirport()
{
	return _destinationAirport;
}
string Flight::getConnections()
{
	return _connections;
}
string Flight::getCallsign()
{
	return _callSign;
}

vector<string> Flight::toString()
{
	vector<string> value;
	value.push_back("[Flight Details]");
	value.push_back("FlightCode:"+to_string(_flightCode));
	value.push_back("DateOfTravel:"+_dateOfDeparture);
	value.push_back("ExpectedTimeOfDeparture:"+to_string(_expectTimeOfDepart));
	value.push_back("ExpectedTimeOfArrival:"+to_string(_expectTimeofArrival));
	value.push_back("OriginatingTerminal:"+_departureAirport);
	value.push_back("DestinationTerminal:"+_destinationAirport);
	value.push_back("Connections:"+_connections);
	value.push_back("SeatsBooked:"+to_string(_seatsBooked));
	value.push_back("AvailableSeats:"+	to_string(_seatsAvailable));
	value.push_back("CallSign:"+_callSign);
	return value;
}

Flight::~Flight()
{
}

//Plane* Flight::getPlane()
//{
//	return plane;
//}
//
//vector<Reservation> Flight::getReservations()
//{
//	return _reservations;
//}
//void Flight::assignPlane(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
//{
//	plane = new Plane(planeType, planeMake, planeModel, planeCallSign, totalSeats);
//}
//
//void Flight::assignReservation(string dateOfBooking)
//{
//	_reservations.push_back(Reservation(_flightCode, dateOfBooking, _dateOfDeparture));
//}
//
//void Flight::assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone)
//{
//	_reservations[_reservations.size() - 1].assignCustomer(customerCode, customerName, customerAddress, customerPhone);
//}
//


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


