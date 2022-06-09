#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    cout<<"Enter a number : ";
    cin >> a;
    cout<<"Enter another number : ";
    cin >> b;
    if (a>b){
        for(int i = 1 ; i<=5 ; ++i){
            cout<<"ITS BIG "<< a << endl ;
        }
    }
    
    return 0;
}
