//encodedServer.cpp

#include "encodedServer.h"

EncodedServer::EncodedServer()
{
	sender = nullptr;
	receiver = nullptr;
}



void EncodedServer::establishConnection(Client * p1, Client *p2)
{
	sender = p1;
	receiver = p2;
}

void EncodedServer::sendMessage(string message)
{
	string emessage = encodeMessage(message);
}


string EncodedServer::encodeMessage(string message)
{
	cout << message;
}