#pragma once

#include <string>
#include <vector>
#include "Planes.h"
#include "Reservations.h"
using namespace std;
class Flights
{
	int _flightCode;
	string _dateOfDeparture;
	float _expectTimeOfDepart;
	float _expectTimeofArrival;
	string _departureAirport;
	string _destinationAirport;
	string _connections;
	int _seatsBooked;
	int _seatsAvailable;
	Planes *plane;
	vector<Reservations> _reservations;

public:
	Flights();
	Flights(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable);
	void assignPlane(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	void assignReservation(string dateOfBooking);
	void assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone);
	~Flights();
	vector<string> toString();
	//int getFlightCode();
	//string getDateOfDepature();
	//float getExpectTimeOfDepart();
	//float getExpectTimeOfArrival();
	//string getDepatureAirport();
	//string getDesinationAirport();
	//string getConnections();
	//int getSeatsBooked();
	//int getSeatsAvailable();
	Planes* getPlane();
	vector<Reservations> getReservations();
};

