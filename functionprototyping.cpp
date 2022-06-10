#include <iostream>
using namespace std;

// declaring a function

int sum(int,int);

int main() {
    int z;

    // calling the function
    z = sum(5,6);
    cout << "5 + 6 = " << z<< endl;

    return 0;
}

int sum(int a, int b){
    return (a+b);
}
