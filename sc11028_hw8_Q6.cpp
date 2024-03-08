#include <iostream>
#include <string>
using namespace std;

int make_array(const string& s, int index[], int MAX);
bool number_check(const string& s, int a, int b);
void change_to_x(string& s, int a, int b);
void check_and_change(string& s, int a, int b);

const int MAX = 100;

int make_array(const string& s, int index[], int MAX){
   int k = 1;
   for(int i = 0; i < s.length(); i ++){
    if(isspace(s[i])){
        index[k] = i;
        k ++;}
   }
   return k; }

bool number_check(const string& s, int a, int b){
    for(int i = a; i <= b; i++){
        if(isdigit(s[i]) == false)
          return false;
    }
    return true;  
}

void change_to_x(string& s, int a, int b){
    for(int i = a; i <= b; i ++){
        s[i] = 'x';
    }
}

void check_and_change(string& s, int a, int b){
    bool k = number_check(s, a, b);
        if(k == true)
            change_to_x(s, a, b);
}

int main(){
    string s;
    int index[MAX];
    int size;
    index[0] = -1;
    cout<<"Please enter a line of text: \n";
    getline(cin, s);

    size = make_array(s, index, MAX); 
    index[size] = s.length();
 
    for(int i = 0; i < size ;  i++){
        check_and_change(s, index[i]+ 1, index[i+1] -1);
    } 
    
    cout<<s;

    return 0;
}
    
    
