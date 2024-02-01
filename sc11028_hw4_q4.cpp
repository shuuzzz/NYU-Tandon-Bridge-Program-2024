#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[]) {
	// Input variable.
	int input = 0, length, counter;
    double value = 1.0;

	// Part A
	cout << "Part A \n";
	cout << "Please enter the length of the sequence: ";
	cin >> length;
	
	cout << "Please enter your sequence: " << endl;
	for(int i = 0; i < length; i++) {
		cin >> input;
		value *= input;
	}

	cout << "The geometric mean is: " << setprecision(5) << pow(value, (1 / (double) length)) << endl;

	// Part B
	cout << "Part B \n";
	cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;
	 
	value = 1.0;
	input = 0;
	counter = 0;

	while(input != -1) {
		cin >> input;
		value *= input;
		counter++;
	}

	cout << "The geometric mean is: " << setprecision(5) << pow(-value, (1 / (double) (counter - 1))) << endl;

	return 0;
}