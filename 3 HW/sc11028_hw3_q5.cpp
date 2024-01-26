#include <iostream>
#include <cmath>
using namespace std;

const double poundstokg = 0.453592;
const double inchtometers = 0.0254;

int main(){

    double weight, height, bmi;

    //Input
    cout<<"Please enter weight (in pounds): ";
    cin>>weight;
    
    cout<<"Please enter height (in inches): ";
    cin>>height;

    //Calculation

    bmi = (weight * poundstokg) / ((height * inchtometers)*(height * inchtometers));

    //Output 

    if (bmi < 18.5){
        cout<<"The weight status is: Underweight"<<endl;
    } else if (bmi >= 18.5 && bmi < 25){
        cout<<"The weight status is: Normal"<<endl;
    } else if (bmi >= 25 && bmi < 30){
        cout<<"The weight status is: Overweight"<<endl;
    }else if (bmi >= 30){
        cout<<"The weight status is: Obese"<<endl;
    }
    return 0;
}

