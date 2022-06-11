#include <iostream>
using namespace std;
int main() {
    int n,c,sum = 0,count=0;
    cout << "The size yo wanna go with : ";
    cin>>n;
    int z[n];
    for(int i = 0 ; i < n ; i++){
        cin>>z[i];
    }
    for (int a = 0; a < n; ++a) {
    cout << z[a] << "  ";
    }
    for (const double &k :z){
        sum +=k;
        ++count;
    }
    cout << "\nTheir Sum = " << sum << endl;
    

    return 0;
}
