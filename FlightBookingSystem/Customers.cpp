#include "stdafx.h"
#include "Customers.h"


Customers::Customers(int customerCode, string customerName, string customerAddress, string customerPhone)
{
	_customerCode = customerCode;
	_customerName = customerName;
	_customerAddress = customerAddress;
	_customerPhone = customerPhone;
}


Customers::~Customers()
{
}
