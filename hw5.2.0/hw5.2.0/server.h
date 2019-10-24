//server.h
#pragma once

#include"client.h"

class Server
{
protected:
	Client * sender;
	Client *receiver;

public:
	virtual void establishConnection(Client*, Client*) = 0;
	virtual void sendMessage(string) = 0;
	void swapClients();

};