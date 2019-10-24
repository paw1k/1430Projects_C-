//main.cpp

#include<iostream>
#include<fstream>
#include"client.h"
#include"encodedServer.h"
#include"server.h"
#include"messageServer.h"

using namespace std;

int main()
{
	Client client1;
	Client *client1_ptr = &client1;
	Client client2(2);
	Client *client2_ptr = &client2;


	MessageServer message1;
	EncodedServer message2;

	string filename = "out.txt";

	ofstream outStream;

	outStream.open(filename, ios::app);

	cout << "Enter Client ID Number:";
	int inputID;
	cin >> inputID;
	client1.setID(inputID);

	char c1, c2;
	cout << "Client 1, make a connection?(y/n)";
	cin >> c1;
	cout << "Client 2, make a connection?(y/n)";
	cin >> c2;


	char e;
	cout << "Encrypted Connection?(y/n)";
	cin >> e;
	if (c1 == 'y' && c2 == 'y')
	{
		if (e == 'y')
		{
			bool result;
			message2.establishConnection(client1_ptr, client2_ptr);
			char c1_e, c2_e;
			cout << "Client 1, does Client 2 get the key?(y/n)";
			cin >> c1_e;
			if (c1_e == 'y')
			{
				result = true;
			}
			else
			{
				result = false;
			}

			client2.setPossesKey(result);
			cout << "Client 2, does Client 1 get the key?(y/n)";
			cin >> c2_e;
			if (c2_e == 'y')
			{
				result = true;
			}
			else
			{
				result = false;
			}

			client1.setPossesKey(result);

		}
		else
		{
			message1.establishConnection(client1_ptr, client2_ptr);
		}
	}
	else
	{
		outStream << "No connection made.";
	}
	while (true)
	{
		string input1, input2, m;
		cout << "Client 1:";
		getline(cin, input1);
		if (!input1.empty())
		{
			client2.setMessage(input1);
			m = client1.getMessage();
			outStream << "Client 1:" << m;
		}
		else
			break;
		cout << "CLinet 2:";
		getline(cin, input2);
		if (!input2.empty())
		{
			client1.setMessage(input1);
			m = client2.getMessage();
			outStream << "Client 2:" << m;
		}
		else
			break;
	}

}