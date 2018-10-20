#pragma once
#include "FileHandlerD.h"
#include "Customers.h"
#include <map>
class FileHandlerC : public FileHandlerD
{
	//this is part of the veratile code commented out in the cpp file
	//string customerDetails_str[4] = { "CustomerCode","CustomerName","CustomerAddress","CustomerPhoneNum" };
	//enum customerDetails
	//{
	//	CustomerCode = 0,
	//	CustomerName,
	//	CustomerAddress,
	//	CustomerPhoneNum
	//};
	//string getLineIdentifier(string line);


	void createCustomers();
	vector<Customers> customers;


public:
	FileHandlerC();
	~FileHandlerC();
};

