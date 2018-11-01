#pragma once
#include "FileHandlerC.h"
#include "FileHandlerA.h"
#include "FileHandlerF.h"
#include "FileHandlerP.h"
#include "FileHandlerR.h"`
class FlightService
{
	FileHandlerA airports;
	FileHandlerC customers;
	FileHandlerF flights;
	FileHandlerR reservations;
	FileHandlerP planes;
	vector<Airport> _airports;
	vector<Flight> _flights;
	vector<Plane> _planes;
	vector<Reservation> _reservations;
	vector<Customer> _customers;
	vector<Reservation> getReservationsFromCustomer(Customer customer);
	Plane getPlaneFromFlight(Flight flight);
	Flight getFlightsFromReservation(Reservation reservation);
	Airport getOriginatingAirportFromFlight(Flight flight);
	Airport getDestinationAirportFromFlight(Flight flight);
public:
	FlightService();


	
	~FlightService();
};

