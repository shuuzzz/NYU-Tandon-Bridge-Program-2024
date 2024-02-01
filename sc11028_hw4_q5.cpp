#include <iostream>
using namespace std; 

int main(){
    int n; 

    cout<<"Please enter a positive integer: "; 
    cin >> n;

    for(int i = 0; i < n; i++){
        int space_len = i, asterisk_len = 2 * (n - i) - 1;

        for (int j = 0; j < space_len; j++){
            cout <<' ';
        }
        for (int k = 0; k < asterisk_len; k++){
        cout <<'*';
        }
        
        cout << endl;
    }

    for (int i = 0; i < n; i++){
        int space_len = n - i - 1, asterisk_len = 2 * i + 1;       
        for (int j = 0; j < space_len; j++){
            cout <<' ';
        }
        for (int k = 0; k < asterisk_len; k++){
        cout <<'*';
        }
        cout << endl;
    }
    return 0;
}