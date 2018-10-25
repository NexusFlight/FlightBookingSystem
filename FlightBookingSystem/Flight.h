#pragma once

#include <string>
#include <vector>
#include "Plane.h"
#include "Reservation.h"
using namespace std;
class Flight
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
	Plane *plane;
	vector<Reservation> _reservations;

public:
	Flight();
	Flight(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable);
	void assignPlane(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	void assignReservation(string dateOfBooking);
	void assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone);
	~Flight();
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
	Plane* getPlane();
	vector<Reservation> getReservations();
};

