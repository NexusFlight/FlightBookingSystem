#include "stdafx.h"
#include "Customers.h"


Customers::Customers(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	_customerCode = customerCode;
	_customerName = customerName;
	_customerAddress = customerAddress;
	_customerPhone = customerPhone;
}

vector<string> Customers::toString() 
{
	vector<string> value;
	value.push_back(to_string(_customerCode));
	value.push_back(_customerName);
	value.push_back(_customerAddress);
	value.push_back(_customerPhone);
	return value;
}

Customers::~Customers()
{
}
