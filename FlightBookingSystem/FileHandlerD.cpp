#include "FileHandlerD.h"



FileHandlerD::FileHandlerD()
{
}

vector<string> FileHandlerD::readFile(string filename)
{
	ifstream file(filename);
	string line = "";
	vector<string> fileContents;

	while (getline(file, line))
	{
		fileContents.push_back(sanitiseString(line));
	}

	return fileContents;
}


void FileHandlerD::writeFile(vector<string> contents, string filename) 
{
	ofstream file(filename);

	for (unsigned int i = 0; i < contents.size(); i++)
	{
		file << contents[i] << '\n';
	}

}

string FileHandlerD::sanitiseString(string input)
{
	int colonPos = 0;
	colonPos = input.find(':')+1;
	if (colonPos == -1)
	{
		return input;
	}
	return input.substr(colonPos, input.length());
}



FileHandlerD::~FileHandlerD()
{
}
