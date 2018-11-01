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

	fAirports.writeChanges(_airports);
	fCustomers.writeChanges(_customers);
	fFlights.writeChanges(_flights);
	fReservations.writeChanges(_reservations);
	fPlanes.writeChanges(_planes);

	/*vector<Reservation> customerReservations = getReservationsFromCustomer(_customers[1]);
	Flight flightForReservation = getFlightsFromReservation(customerReservations[0]);
	Plane planeForFlight = getPlaneFromFlight(flightForReservation);
	Airport destinationFlight = getDestinationAirportFromFlight(flightForReservation);
	Airport originatingFlight = getOriginatingAirportFromFlight(flightForReservation);*/
}










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
