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
	value.push_back("[Customer Details]");
	value.push_back("CustomerCode:"+to_string(_customerCode));
	value.push_back("CustomerName:"+_customerName);
	value.push_back("CustomerAddress:"+_customerAddress);
	value.push_back("CustomerPhoneNum:"+_customerPhone);
	return value;
}

int Customer::getCustomerCode()
{
	return _customerCode;
}

Customer::~Customer()
{
}
