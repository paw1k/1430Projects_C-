// client.cpp

#include"client.h"

Client::Client() 
{

}


Client::Client(int ident)
{
	id = ident;
}

int Client::getID()
{
	return id;
}

void Client::setID(int x)
{
	id = x;
}

string Client::getMessage()
{
	string result_m;
	result_m = decode(message);
	return result_m;
}


void Client::setMessage(string m)
{
	message = m;
}

void Client::setPossesKey(bool r)
{
	possesKey = r;
}

string Client::decode(string m)
{
	string decoded_m;
	if (possesKey == true)
	{
		int i = 0;
		int j = 0;
		while (m[i] != '\O')
		{
			while (j < 26)
			{
				if (m[i] == key[j])
				{
					if (j % 2 == 0)
						decoded_m[i] = key[j + 1];
					else
						decoded_m[i] = key[j - 1];
				}
				j++;

			}
			i++;
		}
		return decoded_m;
	}
	else
		return m;

}