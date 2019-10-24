//encodedServer.h
#pragma once
#include"client.h"
#include<string>
#include"server.h"

using namespace std;

class EncodedServer : public Server
{
	const char key[26] = { 'B', 'A', 'D', 'C','F','E', 'H', 'G','J','I', 'L', 'K','N','M','P','O','R','Q','T','S','V','U','X','W','Z','Y' };
public:
	EncodedServer();
	void establishConnection(Client *, Client *);
	void sendMessage(string);
	string encodeMessage(string);

};