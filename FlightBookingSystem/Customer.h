#pragma once
#include <string>
#include <vector>
using namespace std;
class Customer
{
	int _customerCode;
	string _customerName;
	string _customerAddress;
	string _customerPhone;
public:
	Customer();
	Customer(int customerCode, string customerName, string customerAddress, string customerPhone);
	vector<string> toString();
	int getCustomerCode();
	~Customer();
};

