#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
	int arr1[10];
	int arr2[10];
	int classValue = 1;

	for (int index = 0; index < 10; index++) {
		arr1[index] = rand() % 101;
	}

	for (int index2 = 0; index2 < 10; index2++) {
		arr2[index2] = rand() % 101;
	}

	string menuForClassA = "Class in use is Class A.";
	string menuForClassB = "Class in use is Class B.";

	int commonArr[10];
	for (int i = 0; i < 10; i++) {
		commonArr[i] = arr1[i];
	}

	string menuArr[7] = { menuForClassA, "1. Print Class Grades","2. Select A Student","3. Calculate Average","4. Switch Class","5. Sort","0. Exit" };

	int userChoice = 9;
	while (userChoice != 0)
	{
		for (int k = 0; k < 7; k++) {
			cout << menuArr[k] << endl;
		}

		cout << "Enter your selection number: ";
		cin >> userChoice;

		int count = 1;
		if (userChoice == 1) {
			for (int studCount = 0; studCount < 10; studCount++) {
				cout << "Student " << count << " | ";
				cout << "Grade " << commonArr[studCount] << endl;
				count++;
			}
		}
		else if (userChoice == 2) {
			int userInputsStudent;
			cout << "Enter the student number, between 1 and 10, that you would like the grade for: ";
			cin >> userInputsStudent;

			if (userInputsStudent < 1 || userInputsStudent>10) {
				cout << "ERROR - The Student Index number you entered is invalid." << endl;
			}

			if (userInputsStudent > 0 && userInputsStudent < 11) {
				cout << "Student " << userInputsStudent << " has a grade of " << commonArr[(userInputsStudent - 1)] << endl;
			}
		}
		else if (userChoice == 3) {
			int sum = 0;
			int average = 0;
			for (int every = 0; every < 10; every++) {
				sum += commonArr[every];
			}
			average = sum / 10;

			if (classValue == 1) {
				cout << "Class A has an average of " << average << "." << endl;
			}
			else {
				cout << "Class B has an average of " << average << "." << endl;
			}
		}

		else if (userChoice == 4) {
			if (classValue == 1) {
				for (int i = 0; i < 10; i++) {
					commonArr[i] = arr2[i];
				}
				classValue = 2;
				menuArr[0] = menuForClassB;
			}
			else {
				for (int i = 0; i < 10; i++) {
					commonArr[i] = arr1[i];
				}
				classValue = 1;
				menuArr[0] = menuForClassA;
			}
		}
		else if (userChoice == 5)
		{
			cout << "Original Array: ";
			for (int i = 0; i < 10; i++) {
				cout << commonArr[i] << " ";
			}
			cout << " " << endl;

			int sorted_arr[10];
			for (int i = 0; i < 10; i++)
			{
				sorted_arr[i] = commonArr[i];
			}

			int holds = 0;
			//SORTING algorithm begins here
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < (9 - i); j++) {
					if (sorted_arr[j] > sorted_arr[j + 1]) {
						holds = sorted_arr[j];
						sorted_arr[j] = sorted_arr[j + 1];
						sorted_arr[j + 1] = holds;
					}
				}

			}
			//Sorting Algorithm Ends
			cout << "Sorted Array: ";
			for (int j = 0; j < 10; j++)
			{
				cout << sorted_arr[j] << " ";
			}
			cout << " " << endl;
		}
	}
	cin.get();
	cin.ignore();

	return 0;
}