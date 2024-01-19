#include <iostream>
using namespace std;

int main(){
    char lowerCaseLetter, upperCaseletter;
    int offset;

    cout<<"Please eneter a lower case letter: "<<endl;
    cin>>lowerCaseLetter;

    offset = (int)(lowerCaseLetter - 'a');
    upperCaseletter = (char) ('A' + offset);

    cout<<"The uppercase letter is "<<upperCaseletter<<endl;

    return 0;
}