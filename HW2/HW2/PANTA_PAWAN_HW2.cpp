#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int dotProduct(int* array1, int* array2, int size);
int *alternate(int* array1, int* array2, int size);
void negatives(int* array1, int* array2, int size);
void findRandom(int * array1, int * array2, int size);

int main()
{
	int size;
	cout << "Enter Array Size: ";
	cin >> size;

	while (size <= 0) {
		cout << "Incorrect Array Size. Try Again!" << endl;
		cout << "Enter Array Size: ";
		cin >> size;
	}

	int* array1 = new int[size];
	int* array2 = new int[size];

	int enterNums;
	cout << "-----Begin Entering Array Element-------" << endl;
	cout << "Array 1:" << endl;

	for (int i = 0; i < size; i++) {
		cout << "Enter Element: ";
		cin >> enterNums;
		array1[i] = enterNums;
	}
	cout << endl;

	int enterNums2;
	cout << "---------------" << endl;
	cout << "Array 2:" << endl;

	for (int i = 0; i < size; i++) {
		cout << "Enter Element: ";
		cin >> enterNums2;
		array2[i] = enterNums2;
	}
	cout << endl << endl;
	cout << "---------------" << endl;
	cout << "The dot product is: " << dotProduct(array1, array2, size) << endl << endl;

	cout << "Alternating Array: [";
	int *b;
	b = alternate(array1, array2, size);

	for (int i = 0; i < size*2; i++) {
		if (i == 0) {
		}
		else {
			cout << ", ";
		}
		cout << b[i];
	}
	cout << "]";
	cout << endl <<  endl;

	findRandom(array1, array2, size);

	negatives(array1, array2, size);
	delete[]b;
	delete[]array1;
	delete[]array2;

	cin.get();
	cin.ignore();
	return 0;
}

//finding a random number & winner                  BONUS STARTS HERE
void findRandom(int * array1, int * array2, int size)
{
	srand(time(0));
	int randNum;
	int max = 0;
	int *d;
	d = alternate(array1, array2, size);
	
	for (int i = 0; i < size * 2; i++) {
		if (d[i]>max)
			max = d[i];
	}
	randNum = rand() % (max + 1);

	cout << "Searching for number: " << randNum << endl;
	int winNum = 0;
	for (int i = 0; i < size * 2; i++) {
		if (randNum == d[i]) {
			winNum = d[i];
		}
	}
	if (winNum == 0) {
		cout << "Not a Winner!" << endl << endl;
	}
	else {
		cout << "RANDOM WINNER!" << endl << endl;
	}
	delete[]d;
}

//BONUS ends here

int dotProduct(int* array1, int* array2, int size) {
	int total = 0;
	int *prod = array1;
	int *prod2 = array2;
	for (int i = 0; i < size; i++) {
		total += (*prod) * (*prod2);
		++prod;
		++prod2;
	}
	return total;
}

int *alternate(int *array1, int *array2, int size) {
	size = size * 2;
	int *newArray = new int[size];

	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			newArray[i] = array1[counter];
		}
		else {
			newArray[i] = array2[counter];
			counter = counter + 1;
		}
	}
	return newArray;
}

void negatives(int* array1, int* array2, int size) {
	
	for (int i = 0; i < size; i++) {
		array1[i] = (array1[i])*(-1);
		array2[i] = (array2[i])*(-1);
	}
	cout << "Negative Array 1: [";
	for (int i = 0; i < size; i++) {
		if (i == 0) {
		}
		else {
			cout << ", ";
		}
		cout << array1[i];
	}
	cout << "]";
	cout << endl;

	cout << "Negative Array 2: [";
	for (int i = 0; i < size; i++) {
		if (i == 0) {
		}
		else {
			cout << ", ";
		}
		cout << array2[i];
	}
	cout << "]";
	cout << endl;
}
