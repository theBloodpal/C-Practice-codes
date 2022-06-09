
#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    cout<<"Enter a number : ";
    cin >> a;
    cout<<"Enter another number : ";
    cin >> b;
    
    if (a!=b){
        if (a>b){
            cout<<"Yeah yeah you got it"<<a/b;
        }
    }
    else{
        cout<<"Fuck you";
    }
    return 0;
}