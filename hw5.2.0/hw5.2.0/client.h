//client.h
#pragma once

#include<iostream>
#include<string>

using namespace std;

class Client
{
private:
	int id;
	string message;
	bool possesKey;
	const char key[26] = { 'B', 'A', 'D', 'C','F','E', 'H', 'G','J','I', 'L', 'K','N','M','P','O','R','Q','T','S','V','U','X','W','Z','Y' };
	const char alphabet[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
public:
	Client();
	Client(int);
	int getID();
	void setID(int);
	string getMessage();
	void setMessage(string);
	string decode(string);
	void setPossesKey(bool);

};

