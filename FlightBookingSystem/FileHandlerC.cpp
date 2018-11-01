#include "FileHandlerC.h"



FileHandlerC::FileHandlerC()
{
	createCustomers();
}




void FileHandlerC::createCustomers()
{
	vector<string> customerFile = readFile("../Customers.txt");
	for (unsigned int i = 0; i < customerFile.size(); i++)
	{
		customers.push_back(Customer(stoi(customerFile[i + 1]), customerFile[i + 2], customerFile[i + 3], customerFile[i + 4]));
		i += 4;
	}
}

vector<Customer> FileHandlerC::getCustomers()
{
	return customers;
}

void FileHandlerC::writeChanges(vector<Customer> customers)
{
	vector<string> output;
	for (int i = 0; i < customers.size(); i++)
	{
		vector<string> customer = customers[i].toString();
		for (int j = 0; j < customer.size(); j++)
		{
			output.push_back(customer[j]);
		}
	}
	writeFile(output, "../Customers.txt");
}

FileHandlerC::~FileHandlerC()
{
}



//If the file is not supplied by me then this code could be useful as its more versatile than my implementation
//void FileHandlerC::createCustomers()
//{
//	vector<string> customerFile = readFile("../Customers.txt");
//	vector<Customers> customers;
//	int  customerCode = 0;
//	string customerName = "";
//	string customerAddress = "";
//	string customerPhoneNum = "";
//	for (int i = 0; i < customerFile.size(); i++)
//	{
//		string lineId = getLineIdentifier(customerFile[i]);
//		if (lineId == customerDetails_str[CustomerCode])
//		{
//			customerCode = stoi(sanitiseString(customerFile[i]));
//		}
//		else if (lineId == customerDetails_str[CustomerName])
//		{
//			customerName = sanitiseString(customerFile[i]);
//		}
//		else if (lineId == customerDetails_str[CustomerAddress])
//		{
//			customerAddress = sanitiseString(customerFile[i]);
//		}
//		else if (lineId == customerDetails_str[CustomerPhoneNum])
//		{
//			customerPhoneNum = sanitiseString(customerFile[i]);
//		}
//
//		if (customerCode != 0 && !customerName.empty() && !customerAddress.empty() && !customerPhoneNum.empty())
//		{
//			customers.push_back(Customers(customerCode, customerName, customerAddress, customerPhoneNum));
//			customerCode = 0;
//			customerName = "";
//			customerAddress = "";
//			customerPhoneNum = "";
//		}
//
//	}
//}
//string FileHandlerC::getLineIdentifier(string line)
//{
//	int colonPos = 0;
//	colonPos = line.find(':');
//	return line.substr(0, colonPos);
//}