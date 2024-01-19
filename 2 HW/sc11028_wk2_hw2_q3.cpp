#include <iostream>
using namespace std;

const int HOURS_IN_DAY= 24;
const int MINUTES_IN_HOUR = 60;

int main(){
    int john_Days, john_Hours, john_Minutes;
    int bill_Days, bill_Hours, bill_Minutes;
    int totalwork_Days, totalwork_Hours, totalwork_Minutes; 
    int days, hours, minutes; //identifier

    /* Input */
    cout<< "Please enter the number of days John has worked: \n";
    cin>>john_Days;
    
    cout<< "Please enter the number of hours John has worked: \n";
    cin>>john_Hours;
    
    cout<< "Please enter the number of minutes John has worked: \n";
    cin>>john_Minutes;

    cout<< "Please enter the number of days Bill has worked: \n";
    cin>>bill_Days;
    
    cout<< "Please enter the number of hours Bill has worked: \n";
    cin>>bill_Hours;
    
    cout<< "Please enter the number of minutes Bill has worked: \n";
    cin>>bill_Minutes;
    

    /* Calculations */

    totalwork_Minutes = ((john_Days * HOURS_IN_DAY * MINUTES_IN_HOUR) + (bill_Days * HOURS_IN_DAY * MINUTES_IN_HOUR) + (john_Hours * MINUTES_IN_HOUR) + (bill_Hours * MINUTES_IN_HOUR))+ john_Minutes + bill_Minutes;

    days = totalwork_Minutes / HOURS_IN_DAY / MINUTES_IN_HOUR;
    hours = ((totalwork_Minutes / MINUTES_IN_HOUR) % HOURS_IN_DAY);
    minutes = totalwork_Minutes % MINUTES_IN_HOUR;

    /* Output */
    cout<<"The total time both of them worked together is: "<<days<<" days "<<hours<<" hours "<<minutes<<" minutes"<<endl;

    return 0;

}