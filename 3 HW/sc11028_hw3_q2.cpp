#include <iostream>
#include <string>
using namespace std;

int main(){

   // Variable  
   double startYear, currentYear, gradYear, yearDiff;
   string name, status;

   // Input
   cout<<"Please enter your name: ";
   cin>>name;

   cout<<"Please enter your graduation year: ";
   cin>>gradYear;

   cout<<"Please enter current year: ";
   cin>>currentYear;

   cout<<"Please enter start year: ";
   cin>>startYear;

    // Output 

    if(startYear > currentYear)
    {
        cout<<name<<", you are not in college yet.";
    }
    else if (currentYear >= gradYear)
    {
        cout<<name<<", you have graduated!";
    }
    else if (gradYear - currentYear == 4)
    {
        cout<<name<<", you are a Freshman!";
    }
    else if (gradYear - currentYear == 3)
    {
        cout<<name<<", you are a Sophmore!";
    }
    else if (gradYear - currentYear == 2)
    {
        cout<<name<<", you are a Junior!";
    }
    else if (gradYear - currentYear == 1)
    {
        cout<<name<<", you are a Senior!";
    }

    return 0;
}