// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    long double fac = 1.0;
    cout<<"Enter a number : ";
    cin >> n;
    if (n<0){
        cout<<"Error! the factorial of a negative no is not possible.";
    }
    else{
        for(int i=1 ; i<=n ; i++){
            fac *=i ;
        }
        cout << "The factorial of "<< n << " is : "<< fac;
    }
    
    
    return 0;
}
