#pragma once
#include <string>
#include <fstream>
#include "Airport.h"
#include "Plane.h"
using namespace std;
class FileHandler
{
	vector<Airport> _airports;
	void importMainFile();
	void extractInformation(string fileContent, int fileLength);
	void generateAirports(string line);
	void assignFlightToAirport(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable);
	void assignPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats);
	void assignReservationToFlight( string dateOfBooking);
	void assignCustomerToReservation(int customerCode, string customerName, string customerAddress, string customerPhone);
	string sanitizeString(string line);
public:
	FileHandler();
	vector<Airport> getAirports();
	void writeToFile(vector<Airport> airports);
	~FileHandler();
};

