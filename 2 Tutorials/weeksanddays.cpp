#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;
int main(){
    int daysTraveled;
    int fullWeeks, remainDays;

    cout<< "Please enter number of days you traveled:"<<endl;
    cin>>daysTraveled;

    fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
    remainDays = daysTraveled % DAYS_IN_A_WEEK;

    cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<remainDays<<" days"<<endl;

    return 0;
}