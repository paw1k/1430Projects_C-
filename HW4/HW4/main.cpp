#include<iostream>
#include<iomanip>
#include "stopwatch.h"
using namespace std;

int main()
{
	int userSize = 0;
	cout << "Please enter how many times you would like to store: ";
	cin >> userSize;
	
	stopwatch *arr = new stopwatch [userSize];

	
	for (int i = 0; i < userSize; i++) {
		int hour = 0; //string
		int minute = 0;
		int second = 0;

		cout << "Please enter hour: ";
		cin >> hour;
		cout << "Please enter minute: ";
		cin >> minute;
		cout << "Please enter second: ";
		cin >> second;
		// int h = stoi(str_h)
		if (hour < 0||minute > 60 || second > 60 || minute < 0 || second < 0) {
			arr[i] = stopwatch();
		}
		else {
			arr[i] = stopwatch(hour, minute, second);
		}

	}

	int selection = 0;
	do {
		
		cout << "1) Print Times " << endl;
		cout << "2) Print Total Time " << endl;
		cout << "0) Exit " << endl;
		cout << "Please enter your selection:";
		cin >> selection;

		//if (selection < 0 || selection>2) {
		//	cout << "WRONG INPUT! Please enter a //selection from the menu provided! " << /endl;
		//
		//}

		if (selection==1)
		{
			for (int i = 0; i < userSize; i++)
			{
				cout << "Time " << i+1 << " - ";
				arr[i].printTime();
			
			}

		}
		else if (selection == 2) {

			int sumHour = 0;
			int sumMinute = 0;
			int sumSecond = 0;

			cout << "Total Time - ";
			for (int i = 0; i < userSize; i++)
			{
				sumHour = sumHour + arr[i].get_Hour();
				sumMinute = sumMinute + arr[i].get_Minute();
				sumSecond = sumSecond + arr[i].get_Second();

				while (sumMinute >= 60) {
					sumHour = sumHour + 1;
					sumMinute = sumMinute - 60;
				}
				while (sumSecond >= 60) {
					sumMinute = sumMinute + 1;
					sumSecond = sumSecond - 60;
				}
			}
			cout << sumHour << ":";
			cout << setw(2) << setfill('0') << sumMinute << ":";
			cout << setw(2) << setfill('0') << sumSecond << endl;
		}

	} while (selection!=0);

	delete[]arr;

	cin.get();
	cin.ignore();
	return 0;
}