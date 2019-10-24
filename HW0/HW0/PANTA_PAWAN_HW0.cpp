#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int sum;

	cout << "Please enter a number: " << endl;
	cin >> num1;
	cout << "Please enter another number: " << endl;
	cin >> num2;
	sum = num1 + num2;

	while (num1 < 0 || num2 < 0)
	{
		cout << "ERROR: One or both of your input is negative. Re-Enter numbers." << endl;
		cout << "Please enter a number: " << endl;
		cin >> num1;
		cout << "Please enter another number: " << endl;
		cin >> num2;

		sum = num1 + num2;
	}

	if (sum % 2 == 0) {
		cout << "The sum of the numbers is: " << sum << endl;
	}
	else
	{
		cout << "Forward" << endl;
		for (int i = 1; i <= sum; i++)
		{
			cout << "Loop Iteration:" << i << endl;
		}

		cout << "Reverse" << endl;
		while (sum >= 1)
		{
			cout << "Loop Iteration:" << sum << endl;
			sum--;
		}

	}

	cin.ignore();
	cin.get();

	return 0;
}
