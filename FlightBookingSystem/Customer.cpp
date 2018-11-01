#include "stdafx.h"
#include "Customer.h"


Customer::Customer(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	_customerCode = customerCode;
	_customerName = customerName;
	_customerAddress = customerAddress;
	_customerPhone = customerPhone;
}

vector<string> Customer::toString() 
{
	vector<string> value;
	value.push_back(to_string(_customerCode));
	value.push_back(_customerName);
	value.push_back(_customerAddress);
	value.push_back(_customerPhone);
	return value;
}

int Customer::getCustomerCode()
{
	return _customerCode;
}

Customer::~Customer()
{
}
