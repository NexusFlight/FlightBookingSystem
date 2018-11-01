#include "FlightService.h"



FlightService::FlightService()
{
	airports = FileHandlerA();
	customers = FileHandlerC();
	flights	= FileHandlerF();
	reservations = FileHandlerR();
	planes = FileHandlerP();
	
	_airports = airports.getAirports();
	_customers = customers.getCustomers();
	_flights = flights.getFlights();
	_reservations = reservations.getReservations();
	_planes = planes.getPlanes();
}


FlightService::~FlightService()
{
}
