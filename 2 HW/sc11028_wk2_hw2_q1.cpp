#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int DOLLAR = 100; 

int main(){
    int quarters, dimes, nickels, pennies, totalCents, remainingCents, dollars; //identifier

    /* Input */
    cout<< "Please enter the number of coins: \n";
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;

    /* Calculations */
    totalCents = (QUARTER * quarters) + (DIME * dimes) + (NICKEL * nickels) + pennies;
    
    dollars = totalCents / DOLLAR;
    remainingCents = totalCents % DOLLAR;

    /* Output */
    cout<<"The total is "<< dollars <<" dollars and "<<remainingCents<<" cents\n";

    return 0;

}
