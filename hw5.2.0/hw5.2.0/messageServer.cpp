//messageServer.cpp

#include<iostream>
#include"messageServer.h"

using namespace std;

MessageServer::MessageServer()
{
	sender = nullptr;
	receiver = nullptr;

}

void MessageServer::establishConnection(Client *p1, Client *p2)
{
	sender = p1;
	receiver = p2;
}


void MessageServer::sendMessage(string message)
{

	cout << message;
}