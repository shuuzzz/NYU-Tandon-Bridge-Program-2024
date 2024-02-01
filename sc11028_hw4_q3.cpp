#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int dec; 

    cout << "Enter decimal number: \n";
    cin >> dec;

    cout <<"The binary representation of "<<dec<<" is ";

    for(int exponent = log2(dec); exponent >= 0; exponent--){
        int power = pow(2, exponent);

        if (dec >= power){
            cout <<'1';
            dec -= power;
        }else {
            cout <<'0';   
        }
    }
    cout << endl;

    return 0;
}