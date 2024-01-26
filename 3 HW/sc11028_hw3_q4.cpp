#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main(){
    double number, round;
    int roundingmethod;

    //Input 
    cout<<"Please enter a Real number: "<<endl;
    cin>>number;
    cout<<"Choose your rounding method: \n"<<"1. Floor round\n"<<"2. Ceiling round\n"<<"3. Round to the nearest whole number\n";
    cin>>roundingmethod;

    //Calculation

    switch (roundingmethod)
    {
    case FLOOR_ROUND:
        if (number < 0){
            round = -int(-number) - 1;
        }else{
            round = int(number);
        }
        break;
    case CEILING_ROUND:
        if (number + 1 < 0){
            round = - int(-number + 1) - 1;
        } else {
            round = int(number + 1);
        }
        break;
    case ROUND:
        round = int(number + 0.5);
    break;
    default:
        break;
    }

    //Output
    cout <<round;

    return 0;
}