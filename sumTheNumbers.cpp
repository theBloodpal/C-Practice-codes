// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main() {
    
    int n,s=0;
    cout << "Enter the number : ";
    cin>> n ;
    do {
        s+=n;
        cout << "Enter the number : ";
        cin>> n ;
        
    }
    while(n>=0);
    cout<<"\n The sum is "<< s <<endl;
    
    return 0;
}
