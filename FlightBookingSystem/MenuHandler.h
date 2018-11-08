#pragma once
class MenuHandler
{
	void displayMainMenu();
	void displayAdminMenu();
	void makeReservation();
	int menuChoiceInput(int range);

public:
	MenuHandler();
	
	~MenuHandler();
};

