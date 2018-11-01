#pragma once
#include <string>
#include "Flight.h"
#include <vector>
using namespace std;

class Airport
{
	string _name;
	//vector<Flight> _flights;
	
public:
	Airport();
	Airport(string name);
	//void addFlight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable);
	//void addPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	//void assignReservationToFlight(string dateOfBooking);
	//void assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone);
	string getName();
	vector<string> toString();
	//vector<Flight> getFlights();
	~Airport();
};

