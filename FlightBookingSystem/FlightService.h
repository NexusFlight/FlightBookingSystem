#pragma once
#include "FileHandlerC.h"
#include "FileHandlerA.h"
#include "FileHandlerF.h"
#include "FileHandlerP.h"
#include "FileHandlerR.h"`
#include <ctype.h>
class FlightService
{
	FileHandlerA fAirports;
	FileHandlerC fCustomers;
	FileHandlerF fFlights;
	FileHandlerR fReservations;
	FileHandlerP fPlanes;
	vector<Airport> _airports;
	vector<Flight> _flights;
	vector<Plane> _planes;
	vector<Reservation> _reservations;
	vector<Customer> _customers;	
	string toLower(string input);
public:
	FlightService();

	void addCustomer(string name, string address, string phoneNum);

	void addReservation(int flightCode, string dateOfBooking, string dateOfDeparture, int customerCode);

	void addFlight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable, string callCode);


	Customer getCustomerByCode(int customerCode);
	vector<Reservation> getReservationsFromCustomer(Customer customer);
	Flight getFlightsFromReservation(Reservation reservation);
	Plane getPlaneFromFlight(Flight flight);
	Airport getOriginatingAirportFromFlight(Flight flight);
	Airport getDestinationAirportFromFlight(Flight flight);
	
	~FlightService();
};
//Customer getCustomerFromName(string name);
