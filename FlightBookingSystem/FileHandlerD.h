#pragma once
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class FileHandlerD
{
public:
	FileHandlerD();
	~FileHandlerD();
protected:
	vector<string> readFile(string filename);
	void writeFile(vector<string> contents, string filename);
	string sanitiseString(string input);
};

