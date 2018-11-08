#pragma once
#include <string>
#include <vector>
using namespace std;
class Customers
{
	int _customerCode;
	string _customerName;
	string _customerAddress;
	string _customerPhone;
public:
	Customers();
	Customers(int customerCode, string customerName, string customerAddress, string customerPhone);
	vector<string> toString();
	~Customers();
};

