#include <iostream>
using namespace std; 

void printShiftedTriangle(int n, int m, char symbol){

int symcount = 1; 
int spacecount = m + n - 1; 

for (int i = 0; i < n; i++){

    for (int j = 0; j < spacecount; j++){
        cout<<" ";
    }
    for (int k = 0; k < symcount; k++){
        cout << symbol;
    }

    symcount += 2;
    spacecount--;
    cout << endl;
    }
}
void printPineTree(int n, char symbol){
    int pinelen = n; 
    int symcount = 1;
    int spacecount = n; 
    int opengingstack = 2; 

    while (pinelen > 0){
        for (int i = 0; i < opengingstack; i++){
            for (int j = 0; j < spacecount; j++){
                cout<<" ";
            }
            for (int k = 0; k<symcount; k++){
            cout<<symbol;
            }
            spacecount--;
            symcount+=2;
            cout << endl;

        }
        symcount = 1;
        opengingstack++;
        spacecount = n;
        pinelen--;
    }
}

int main(){

    cout<< "Section A: Print Shifted Triangle"<<endl;
    printShiftedTriangle(3, 4, '+');

    cout << endl;

    cout<<"Section B: Print Pine Tree"<<endl;
    printPineTree(3,'+');
        
    return 0;
}
