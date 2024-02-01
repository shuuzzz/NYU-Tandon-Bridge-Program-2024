#include <iostream>

using namespace std;

int main() {

	int n; 
	cout << "Please enter a positive integer: ";
	cin >> n;

	for(int i = 1; i <= n; i++) { 
		int curr = i; 
		int odd = 0, even = 0; 
		while(curr > 0) {
			int remainder = curr % 10; 
			if(remainder % 2 == 0) {
				even++;
			} else {
				odd++;
			}
			curr /= 10;
		}
		if(even > odd) {
			cout << i << endl;
		}
	}
	return 0;
}