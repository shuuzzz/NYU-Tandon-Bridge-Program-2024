#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int n, num = 0;
	// Part A: While loop
	cout << "Part A\n";
	cout << "Please enter a positive integer: ";
	cin >> n;
	while(n > 0) {
		cout << (num += 2) << endl;
		n--;
	}

	// Part B: For loop
	cout << "Part B \n";
	cout << "Please enter a positive integer: ";
	cin >> n;
	for(int k = 2; k <= (n * 2); k += 2) {
		cout << k << endl;
	}

	return 0;
}