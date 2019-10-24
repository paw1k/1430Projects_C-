//messageServer.h
#pragma once
#include"server.h"

class MessageServer : public Server
{
public:
	MessageServer();
	void establishConnection(Client *, Client *);
	void sendMessage(string);

};