#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int num = 0, m, d, c, l, x, v, i, n; 

    cout <<"Enter decimal number: "<< endl;
    cin >> num;

    cout << num << " is ";

    while (num > 0){
        if(num >= 1000) {
            m = num / 1000;
            for (n = 0; n < m; n++){
                cout << "M";
            }
            num %= 1000;
        } else if (num >= 500)   {
            d = num / 500;
            for (n = 0; n < d; n++){
                cout << "D";
            }
            num %= 500;
        } else if (num >= 100)   {
            c = num / 100;
            for (n = 0; n < c; n++){
                cout << "C";
            }
            num %= 100;
        } else if (num >= 50)   {
            l = num / 50;
            for (n = 0; n < l; n++){
                cout << "L";
            }
            num %= 50;
        } else if (num >= 10)   {
            x = num / 10;
            for (n = 0; n < x; n++){
                cout << "X";
            }
            num %= 10;
        } else if (num >= 5)   {
            v = num / 5;
            for (n = 0; n < v; n++){
                cout << "V";
            }
            num %= 5;
        } else{
            i = num / 1;
            for (n = 0; n < i; n++){
                cout << "I";
            }
            num %= 1;
        }
    }
    cout << endl;
    return 0;
}
