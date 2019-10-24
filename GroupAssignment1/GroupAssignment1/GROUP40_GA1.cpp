#include <iostream>
#include <string>
using namespace std;

int main()
{
	int userPuts = 0, int_count = 0, temp = 0, addNum = 0, delNum = 0;
	int * org_arr = new int[2];
	int arrSize = 2;
	int changer = 1;

	do
	{
		if (changer == 1)
		{
			cout << "1) Print element" << endl << "2) Add element " << endl << "3) Delete element" << endl << "4) Return size" << endl << "5) Exit" << endl << "6) Descend" << endl << endl;
			cout << "Enter selection: ";
			cin >> userPuts;
			cout << endl;
		}
		else {
			cout << "1) Print element" << endl << "2) Add element " << endl << "3) Delete element" << endl << "4) Return size" << endl << "5) Exit" << endl << "6) Ascend" << endl << endl;
			cout << "Enter selection: ";
			cin >> userPuts;
			cout << endl;
		}
		if (userPuts < 1 || userPuts>6) {
			cout << "Not Available. Input a number from available Menu." << endl;
			cout << "Enter selection: ";
			cin >> userPuts;
			cout << endl;
		}

		switch (userPuts) {
		case 1:
			cout << "Elements: ";

			for (int i = 0; i < int_count; i++) {
				if (i == 0) {
				}
				else {
					cout << ", ";
				}
				cout << org_arr[i] << " ";
			}
			cout << endl << endl;
			break;

		case 2:

			cout << "Element to add: ";
			cin >> addNum;

			if (arrSize > int_count) {
				org_arr[int_count] = addNum;
				int_count++;
			}
			else {
				arrSize = 2 * arrSize;
				int *tempArr = new int[arrSize];
				for (int i = 0; i < arrSize / 2; i++) {
					tempArr[i] = org_arr[i];
				}
				cout << endl;
				cout << "New Array size " << arrSize << "." << endl;
				delete[]org_arr;
				org_arr = tempArr;
				org_arr[int_count] = addNum;
				int_count++;
			}

			if (changer == 1) {
				for (int i = 0; i <= (int_count - 1); i++) {
					for (int j = 0; j < (int_count - i - 1); j++) {
						if (org_arr[j] > org_arr[j + 1]) {
							temp = org_arr[j];
							org_arr[j] = org_arr[j + 1];
							org_arr[j + 1] = temp;
						}
					}
				}
			}
			else {
				for (int i = 0; i <= (int_count - 1); i++) {
					for (int j = 0; j < (int_count - i - 1); j++) {
						if (org_arr[j] < org_arr[j + 1]) {
							temp = org_arr[j];
							org_arr[j] = org_arr[j + 1];
							org_arr[j + 1] = temp;
						}
					}
				}
			}


			cout << endl;
			break;

		case 3:
		{
			int del_Num;
			int point = 0, counter = 0;
			cout << "Element to delete: ";
			cin >> del_Num;
			cout << endl;
			for (int i = 0; i < arrSize; i++) {
				if (org_arr[i] == del_Num) {
					point = 1;
					int_count--;
					for (int j = i; j < arrSize - 1; j++) {
						org_arr[j] = org_arr[j + 1];
						org_arr[j + 1] = -1;
					}
				}
			}
			if (point == 0) {
				cout << "Number is not in array." << endl << endl;
			}
			for (int i = 0; i < arrSize; i++) {
				if (org_arr[i] == -1) {
					counter++;
				}
			}
			if (counter >= 1 && int_count <= arrSize / 2) {
				arrSize = arrSize / 2;
				int *temp = new int[arrSize];
				for (int i = 0; i < arrSize; i++) {
					temp[i] = -1;
				}
				for (int i = 0; i < arrSize; i++) {
					temp[i] = org_arr[i];
				}
				cout << endl << "New Array size: " << arrSize << endl << endl;
			}
			break;
		}

		case 4:
			cout << "Element count in Array: " << int_count << endl;
			cout << "Array Size: " << arrSize << endl << endl;
			break;

		case 6:
			if (changer == 1) {
				changer = 0;
				for (int i = 0; i <= (int_count - 1); i++) {
					for (int j = 0; j < (int_count - i - 1); j++) {
						if (org_arr[j] < org_arr[j + 1]) {
							temp = org_arr[j];
							org_arr[j] = org_arr[j + 1];
							org_arr[j + 1] = temp;
						}
					}
				}
			}
			else {
				changer = 1;
				for (int i = 0; i <= (int_count - 1); i++) {
					for (int j = 0; j < (int_count - i - 1); j++) {
						if (org_arr[j] > org_arr[j + 1]) {
							temp = org_arr[j];
							org_arr[j] = org_arr[j + 1];
							org_arr[j + 1] = temp;
						}
					}
				}
			}
			break;
		}
	} while ((userPuts >= 1 && userPuts <= 4) || userPuts == 6);

	if (userPuts == 5) {
		delete[]org_arr;
		cout << "Program Terminated. ";
	}

	cin.get();
	cin.ignore();

	return 0;
}