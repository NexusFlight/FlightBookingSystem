#pragma once
#include <string>
#include "Flights.h"
#include <vector>
using namespace std;

class Airports
{
	string _name;
	vector<Flights> _flights;
	
public:
	Airports();
	Airports(string name);
	void addFlight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable);
	void addPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	void assignReservationToFlight(string dateOfBooking);
	void assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone);
	string getName();
	vector<Flights> getFlights();
	~Airports();
};

