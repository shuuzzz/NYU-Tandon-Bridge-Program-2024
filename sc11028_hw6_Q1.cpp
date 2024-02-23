#include <iostream>
using namespace std; 

int fib(int n){
    int t1 = 0, t2 = 1, sum, count; 

    while (count <= n){
        if (count < 2){
            sum = t1 + t2;
        }
        else{
            sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
        count ++;
    }
    return sum;
}

int main(){
    int input, output; 

    cout<<"Please enter a positve integer: ";
    cin>>input; 

    output = fib(input);
    cout << output;

    return 0;
}