#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ofstream output;
	fstream input1;
	fstream input2;
	string path_for_file;

	cout << "1st File: ";
	cin >> path_for_file;
	input1.open(path_for_file);
	if (!input1.is_open())
		exit(1);

	cout << "2nd File: ";
	cin >> path_for_file; 
	input2.open(path_for_file);
	if (!input2.is_open())
		exit(1); 

	cout << "Output File: ";
	cin >> path_for_file;
	output.open(path_for_file);

	int row_d1, col_d1, row_d2, col_d2;
	string line;

	do {
		getline(input1, line);
	} while (line[0] == '#');

	stringstream ss; 
	ss.str(line);
	ss >> row_d1 >> col_d1;
	ss.clear();

	do {
		getline(input2, line);
	} while (line[0] == '#');

	ss.str(line);
	ss >> row_d2 >> col_d2;
	ss.clear();



	if ((row_d1 != row_d2) or (col_d1 != col_d2)) {
		cout << "Input matrixs don't have same dimensions!" << endl;
	}
	else {
		
		struct element {
			int row;
			int column;
			double value;
		};
		
		element *m1 = new element[1000];    //m for matrix
		element *m2 = new element[1000]; 
		element *m3 = new element[1000]; 
		int element_for_1 = 0, element_for_2 = 0, element_for_3 = 0;

		int num1, num2;
		double num3;

		while (getline(input1, line)) {
			if (line[0] != '#') {
				ss.str(line);
				ss >> num1 >> num2 >> num3;
				ss.clear();

				m1[element_for_1].row = num1;
				m1[element_for_1].column = num2;
				m1[element_for_1].value = num3;
				element_for_1++;
			}
		}

		while (getline(input2, line)) {
			if (line[0] != '#') {
				ss.str(line);
				ss >> m2[element_for_2].row >> m2[element_for_2].column >> m2[element_for_2].value;
				ss.clear();
				element_for_2++;
			}
		}

		bool is_same = false;
		for (int i = 0; i < element_for_1; i++) {
			is_same = false; 
			for (int k = 0; k < element_for_2; k++) {
				if ((m1[i].row == m2[k].row) and (m1[i].column == m2[k].column)) {
					m3[element_for_3].row = m1[i].row; 
					m3[element_for_3].column = m1[i].column;
					m3[element_for_3].value = m1[i].value + m2[k].value;
					element_for_3++;
					is_same = true;
				}
			}
			if (!is_same) { 
				m3[element_for_3].row = m1[i].row;
				m3[element_for_3].column = m1[i].column;
				m3[element_for_3].value = m1[i].value;
				element_for_3++;
			}
		}
		
		for (int i = 0; i < element_for_2; i++) {
			is_same = false; 
			for (int k = 0; k < element_for_3; k++) {
				if ((m2[i].row == m3[k].row) and (m2[i].column == m3[k].column)) {
					is_same = true;
				}
			}
			if (!is_same) { 
				m3[element_for_3].row = m2[i].row;
				m3[element_for_3].column = m2[i].column;
				m3[element_for_3].value = m2[i].value;
				element_for_3++;
			}
		}
		
		element temp_Var;
		if (element_for_3 > 1) {
			for (int i = 0; i < element_for_3 - 1; i++) {
				for (int k = 0; k < element_for_3 - i - 1; k++) {
					if (m3[k].column > m3[k + 1].column) {
						temp_Var = m3[k];
						m3[k] = m3[k + 1];
						m3[k + 1] = temp_Var;
					}
				}
			}

			for (int i = 0; i < element_for_3 - 1; i++) {
				for (int k = 0; k < element_for_3 - i - 1; k++) {
					if (m3[k].row > m3[k + 1].row) {
						temp_Var = m3[k];
						m3[k] = m3[k + 1];
						m3[k + 1] = temp_Var;
					}
				}
			}
		}

		
		output << "#Matrix C " << endl;

		
		output << row_d1 << ' ' << col_d1 << endl; 

																		
		for (int i = 0; i < element_for_3; i++)
			output << m3[i].row << ' ' << m3[i].column << ' ' << m3[i].value << ' ' << endl;

		cout << "Output successfully produced! " << endl;

		
		delete[] m1;
		delete[] m2;
		delete[] m3;
	}

	input1.close();
	input2.close();
	output.close();

	cin.get();
	cin.ignore();
	return 0;
}