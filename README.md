# FlightBookingSystem

This is a project for my first year Applied Computing BSc.

Here is the brief

Developing Software: Introduction
Flight Management Brief

This project is a prototype for the flight management system and will be useful for the flight management team and as well as to the passengers.  You will need to consider and create text files then populate them with dummy test data sets for testing purposes.  

The airline system stores the following information.

Flight details:
It includes the originating flight terminal and destination terminal, along with the stops in between, the number of seats booked/available seats between two destinations.

Customer description:
It includes customer code, name, address and phone number. This information may be used for keeping the records of the customer for any emergency or for any other kind of information.

Reservation description:
It includes customer details, code number, flight number, date of booking, date of travel.

Users of the system should be able to retrieve flight information between two given cities with the given date/time of travel from the text file. A route from city A to city B is a sequence of connecting flights from A to B such that: a) there are at most two connecting stops, excluding the starting city and destination city of the trip, b) the connecting time is between one to two hours. The system will support two types of user privileges, Customer, and Employee. Customers will have access to customer functions, and the employees will have access to both customer and flight management functions. The customer should be able to do the following functions:

Make a new reservation

•	One-way
•	Round-Trip
•	Multi-city
•	Flexible Date/time
•	Confirmation
•	Cancel an existing reservation
•	View his itinerary

The Employee should have following management functionalities:

Customer Functions

•	Get all customers who have seats reserved on a given flight.
•	Get all flights for a given airport.
•	View flight schedule.
•	Get all flights whose arrival and departure times are on time/delayed.
•	Calculate total sales for a given flight.

Administration
•	Add/Delete a flight
•	Add a new airport
•	Update fare for flights.
•	Add a new flight leg instance.
•	Update departure/arrival times for flight leg instances.

Each flight has a limited number of available seats. There are a number of flights which depart from or arrive at different cities on different dates and time.

