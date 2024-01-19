#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int DOLLAR = 100; 

int main(){
    int quarters, dimes, nickels, pennies, totalCents, remainingCents, dollars, cents; //identifier

    /* Input */
    cout<< "Please enter your amount in the format of dollars and cents separated by a space: \n";
    cin>>dollars>>cents;

    /* Calculations */
    totalCents = (dollars * DOLLAR) + cents;
    
    quarters = totalCents / QUARTER;
    remainingCents = totalCents % QUARTER; //remainder
    
    dimes = remainingCents / DIME;
    remainingCents %= DIME;
    
    nickels = remainingCents / NICKEL;
    remainingCents %= NICKEL;

    pennies =  remainingCents;

    /* Output */
    cout<<dollars<<" dollars and "<<remainingCents<<" cents are: \n";
    cout<<quarters<<" quaters "<<dimes<<" dimes "<<nickels<<" nickels and"<<pennies<<" pennies\n";

    return 0;

}