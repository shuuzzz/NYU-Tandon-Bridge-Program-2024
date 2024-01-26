#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main(int argc, char const *argv[]) {
	
	const double dayrate = 0.40;
	const double nightrate = 0.25;
	const double weekendrate = 0.15;

	int hour, minutes, duration; 
	string day;
	char placeholder; 

	//Input
	cout << "Please enter call start time in 24 hour format (HH:MM): ";
	cin >> hour >> placeholder >> minutes;
	cout << "Please enter day of the week (Mo Tu We Th Fr Sa Su): ";
	cin >> day;
	cout << "Please enter duration of call in minutes: ";
	cin >> duration;

	cout << fixed << setprecision(2);

	// Output
	if(day == "Sa" || day == "Su") {
		cout << "This call will cost: $" << (weekendrate * duration) << endl;
	} else 
		if(hour >= 8 && hour <= 18) {
			
			if(hour == 18 && minutes != 0) {
				cout << "This call will cost: $" << (nightrate * duration) << endl; 
			} else {
				cout << "This call will cost: $" << (dayrate * duration) << endl; 
			}
		} else {
			cout << "This call will cost: $" << (nightrate * duration) << endl; 
		}

        	return 0;
	}

