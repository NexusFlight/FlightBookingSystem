#include "FlightService.h"



FlightService::FlightService()
{
	fAirports = FileHandlerA();
	fCustomers = FileHandlerC();
	fFlights	= FileHandlerF();
	fReservations = FileHandlerR();
	fPlanes = FileHandlerP();
	
	_airports = fAirports.getAirports();
	_customers = fCustomers.getCustomers();
	_flights = fFlights.getFlights();
	_reservations = fReservations.getReservations();
	_planes = fPlanes.getPlanes();

}

void FlightService::addCustomer(string name, string address, string phoneNum)
{
	_customers.push_back(Customer(_customers.size()+1, name, address, phoneNum));
}

void FlightService::addReservation(int flightCode, string dateOfBooking, string dateOfDeparture, int customerCode)
{
	_reservations.push_back(Reservation(flightCode, dateOfBooking, dateOfDeparture, customerCode));
}

void FlightService::addFlight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable, string callCode)
{
	_flights.push_back(Flight(flightCode, dateOfDeparture, expcTimeOfDepart, expectTimeofArrival, departureAirport, destinationAirport, connections, seatsBooked, seatsAvailable, callCode));
}

string FlightService::toLower(string input)
{
	string output = "";
	for (int i = 0; i < input.length(); i++)
	{
		output += tolower(input[i]);
	}
	return output;
}

Customer FlightService::getCustomerByCode(int customerCode)
{
	for (int i = 0; i < _customers.size(); i++)
	{
		if (_customers[i].getCustomerCode() == customerCode)
		{
			return _customers[i];
		}
	}
	return Customer();
}

//this is commented out as a customers name may not be unique will use customer code for lookup
//Customer FlightService::getCustomerFromName(string name)
//{
//	for (int i = 0; i < _customers.size(); i++)
//	{
//		if (toLower(_customers[i].geCustomerName()) ==  toLower(name))
//		{
//			return _customers[i];
//		}
//	}
//}


Airport FlightService::getOriginatingAirportFromFlight(Flight flight)
{
	string deptAirport = flight.getDepatureAirport();
	for (int i = 0; i < _airports.size(); i++)
	{
		if (_airports[i].getName() == deptAirport)
		{
			return _airports[i];
		}
	}
	return Airport();
}

Airport FlightService::getDestinationAirportFromFlight(Flight flight)
{
	string destAirport = flight.getDestinationAirport();
	for (int i = 0; i < _airports.size(); i++)
	{
		if (_airports[i].getName() == destAirport)
		{
			return _airports[i];
		}
	}
	return Airport();
}

Flight FlightService::getFlightsFromReservation(Reservation reservation)
{
	int flightCode = reservation.getFlightCode();
	for (int i = 0; i < _flights.size(); i++)
	{
		if (_flights[i].getFlightCode() == flightCode)
		{
			return _flights[i];
		}
	}
	return Flight();
}

vector<Reservation> FlightService::getReservationsFromCustomer(Customer customer)
{
	int customerCode = customer.getCustomerCode();
	vector<Reservation> custReserve;
	for (int i = 0; i < _reservations.size(); i++)
	{
		if (_reservations[i].getCustomerCode() == customerCode)
		{
			custReserve.push_back(_reservations[i]);
		}
	}
	return custReserve;
}

Plane FlightService::getPlaneFromFlight(Flight flight)
{
	string callSign = flight.getCallsign();
	for (int i = 0; i < _planes.size(); i++)
	{
		if (_planes[i].getCallSign() == callSign)
		{
			return _planes[i];
		}
	}
	return Plane();
}

FlightService::~FlightService()
{
}
