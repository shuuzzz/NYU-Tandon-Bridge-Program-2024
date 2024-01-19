#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int DOLLAR = 100; 

int main(){
    int quarters = -1, dimes = -1, nickels = -1, pennies = -1; //cross check if value is negative 
    int totalCents, remainingCents, dollars; //identifier

    /* Input */
    cout<< "Please enter the number of coins: \n";

    while (quarters < 0)
    {
        cout<<"# of quarters: ";
        cin>>quarters;
    }
    while (dimes < 0)
    {
        cout<<"# of dimes: ";
        cin>>dimes;
    }

    while (nickels < 0)
    {
        cout<<"# of nickels: ";
        cin>>nickels;
    }
     while (pennies < 0)
    {
        cout<<"# of pennies: ";
        cin>>pennies;
    }  

    /* Calculations */
    totalCents = (QUARTER * quarters) + (DIME * dimes) + (NICKEL * nickels) + pennies;
    
    dollars = totalCents / DOLLAR;
    remainingCents = totalCents % DOLLAR;

    /* Output */
    cout<<"The total is "<< dollars <<" dollars and "<<remainingCents<<" cents\n";

    return 0;

}
