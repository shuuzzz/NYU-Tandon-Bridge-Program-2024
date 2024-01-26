#include <iostream>
#include <cmath>
using namespace std;

int main(){

   // Variable
    double a, b, c, solution_1, solution_2, discriminant;
    int num_solution;

    // Input 
    cout<<"Please enter value of a: ";
    cin >>a;
    cout<<"Please enter value of b: ";
    cin >>b;
    cout<<"Please enter value of c: ";
    cin >>c;

    discriminant = ((b*b) - (4 * a * c));

    if (a == 0 && b == 0 && c == 0){
        cout<<"There are an infinite number of solutions"<<endl;
    } else if(a == 0){
        cout<<"There is no solutions."<<endl;
    } else{
        if(((b * b) - 4 * a * c) > 0){
            solution_1 = ((-b) + sqrt(discriminant))/ (2 * a);
            solution_2 = ((-b) - sqrt(discriminant))/ (2 * a);
            cout<<"This equation has 2 solutions: x = "<<solution_1<<" and "<<solution_2<<endl;
        }
        else if (((b * b) - 4 * a * c) == 0){
            cout<< "There are 1 solution."<<((-b) / (2 * a))<<endl;
        } 
        else{
            cout<<"There is no real solution."<<endl;
        }
    }
    return 0;
}