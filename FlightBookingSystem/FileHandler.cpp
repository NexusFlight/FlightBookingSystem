#include "stdafx.h"
#include "FileHandler.h"
#include <iostream>
#include "Airports.h"
#include <vector>
#include <algorithm>

using namespace std;
//ToDo: Multi File structure Derived file handlers
//Command pattern?

FileHandler::FileHandler()
{
	importMainFile();
}

vector<Airports> FileHandler::getAirports()
{
	return _airports;
}

void FileHandler::writeToFile(vector<Airports> airports)
{
	ofstream file("../BookingFile.txt");
	for  (int i = 0;  i < airports.size();  i++)
	{
		file << "[Airport Name]";
		file << '\n';
		file << airports[i].getName();
		file << '\n';
		vector<Flights> flights = airports[i].getFlights();
		for (int j = 0; j < flights.size(); j++)
		{
			vector<string> flightDetails = flights[j].toString();
			file << "[Flight Details]";
			file << '\n';
			for (int k = 0; k < flightDetails.size(); k++)
			{
				file << flightDetails[k];
				file << '\n';
			}
			file << "\t[Plane Details]";
			file << '\n';
			vector<string> planeDetails = flights[j].getPlane()->toString();
			for (int k = 0; k < planeDetails.size(); k++)
			{
				file << '\t'+planeDetails[k];
				file << '\n';
			}
			vector<Reservations> reservations = flights[j].getReservations();
			for (int k = 0; k < reservations.size(); k++)
			{
				string reservationDetails = reservations[k].toString();
				vector<string> customerDetails = reservations[k].getCustomer()->toString();
				file << "\t[Reservation Details]";
				file << '\n';
				file << '\t'+reservationDetails;
				file << '\n';
				file << "\t[Customer Details]";
				file << '\n';
				for (int l = 0; l < customerDetails.size(); l++)
				{
					file << '\t'+customerDetails[l];
					file << '\n';
				}
				
			}
		}
	}


}

void FileHandler::importMainFile()
{
	ifstream file("../BookingFile.txt");
	string line = "";
	vector<string> fileContents;
	
	while (getline(file,line))
	{
		fileContents.push_back(sanitizeString(line));
	}
	for (unsigned int i = 0; i < fileContents.size(); i++)
	{
		if (fileContents[i] == "[Airport Name]")
		{
			generateAirports(fileContents[i + 1]);
		}
		if (fileContents[i] == "[Flight Details]")//9 lines
		{
			assignFlightToAirport(stoi(fileContents[i+1]), fileContents[i+2], stof(fileContents[i+3]), stof(fileContents[i + 4]), fileContents[i + 5], fileContents[i + 6], fileContents[i + 7], stoi(fileContents[i + 8]), stoi(fileContents[i + 9]));
		}
		if (fileContents[i] == "[Plane Details]")//5 lines
		{
			assignPlaneToFlight(fileContents[i + 1], fileContents[i + 2], fileContents[i + 3], fileContents[i + 4], stoi(fileContents[i + 5]));
		}
		if (fileContents[i] == "[Reservation Details]")//1 line
		{
			assignReservationToFlight(fileContents[i + 1]);
		}
		if (fileContents[i] == "[Customer Details]")//4 lines
		{
			assignCustomerToReservation(stoi(fileContents[i + 1]), fileContents[i + 2], fileContents[i + 3], fileContents[i + 4]);
		}
		
	}
	

}


void FileHandler::generateAirports(string line)
{
	_airports.push_back(Airports(line));
}

void FileHandler::assignFlightToAirport(int flightCode, string dateOfDeparture, float expcTimeOfDepart, float expectTimeofArrival, string departureAirport, string destinationAirport, string connections, int seatsBooked, int seatsAvailable) {
	_airports[_airports.size()-1].addFlight(flightCode, dateOfDeparture, expcTimeOfDepart, expectTimeofArrival, departureAirport, destinationAirport, connections, seatsBooked, seatsAvailable);
}

void FileHandler::assignPlaneToFlight(string planeType, string planeMake, string planeModel, string planeCallSign, int totalSeats)
{
	_airports[_airports.size() - 1].addPlaneToFlight(planeType, planeMake, planeModel, planeCallSign, totalSeats);
}

void FileHandler::assignReservationToFlight(string dateOfBooking)
{
	_airports[_airports.size() - 1].assignReservationToFlight(dateOfBooking);
}

void FileHandler::assignCustomerToReservation(int customerCode,string customerName,string customerAddress,string customerPhone)
{
	_airports[_airports.size() - 1].assignCustomerToReservation(customerCode, customerName, customerAddress, customerPhone);
}



string FileHandler::sanitizeString(string line)
{
	line.erase(remove(line.begin(), line.end(), '\t'));
	return line;
}

FileHandler::~FileHandler()
{
	_airports.~vector();
}

//vector<Airports> airports;
//if (line == "[Airport Name]")
//{
//	line = getNextLine(file);
//	airports.push_back(generateAirports(line));
//}
//if (line == "[Flight Details]" || getNextLine(file) == "[Flight Details]")
//{
//	int flightCode = 0;
//	string dateOfTravel = "";
//	float expcTimeOfDeparture = 0;
//	float expcTimeOfArrival = 0;
//	string originatingLoc = "";
//	string destinationLoc = "";
//	string connections = "";
//	int seatsBooked = 0;
//	int seatsAvailable = 0;
//	file >> flightCode;
//	getline(file, line);//double get line to skip the empty line left by the >> operator
//	dateOfTravel = getNextLine(file);
//	file >> expcTimeOfDeparture;
//	getline(file, line);
//	file >> expcTimeOfArrival;
//	getline(file, line);
//	originatingLoc = getNextLine(file);
//	destinationLoc = getNextLine(file);
//	connections = getNextLine(file);
//	file >> seatsBooked;
//	getline(file, line);
//	file >> seatsAvailable;
//	getline(file, line);
//	assignFlightToAirport(airports[airports.size() - 1], flightCode, dateOfTravel, expcTimeOfDeparture, expcTimeOfArrival, originatingLoc, destinationLoc, connections, seatsBooked, seatsAvailable);
//}
//if (sanitizeString(line) == "[Plane Details]" || getNextLine(file) == "[Plane Details]")
//{
//	string planeType = "";
//	string planeMake = "";
//	string planeModel = "";
//	string planeCallSign = "";
//	int totalSeats = 0;
//	planeType = getNextLine(file);
//	planeMake = getNextLine(file);
//	planeModel = getNextLine(file);
//	planeCallSign = getNextLine(file);
//	file >> totalSeats;
//	getline(file, line);
//	assignPlaneToFlight(airports[airports.size() - 1], planeType, planeMake, planeModel, planeCallSign, totalSeats);
//
//}
//if (sanitizeString(line) == "[Reservation Details]" || getNextLine(file) == "[Reservation Details]")
//{
//	//flightCode
//	string dateOfBooking = "";
//	cout << line;
//	dateOfBooking = getNextLine(file);
//	//dateOfTravel in flight details
//	assignReservationToFlight(airports[airports.size() - 1], dateOfBooking);
//}
//if (sanitizeString(line) == "[Customer Details]" || getNextLine(file) == "[Customer Details]")
//{
//	int customerCode = 0;
//	string customerName = "";
//	string customerAddress = "";
//	string customerPhone = "";
//	file >> customerCode;
//	getline(file, line);
//	customerName = getNextLine(file);
//	customerAddress = getNextLine(file);
//	customerPhone = getNextLine(file);
//	assignCustomerToReservation(airports[airports.size() - 1], customerCode, customerName, customerAddress, customerPhone);
//}