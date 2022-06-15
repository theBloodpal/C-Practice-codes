#include <iostream>

using namespace std;

struct Gear{
    char name[50],brand[50];
    float price;
};

void displayData(Gear);

int main()
{
    Gear a;
    cout<<"Enter the model name : ";
    cin.get(a.name,50);
    cout<<"Enter the Brand name : ";
    cin>>a.brand;
    cout<<"Enter the price : ";
    cin>>a.price;
    
    // function call with structure variable as an argument
    
    displayData(a);

    return 0;
}

void displayData(Gear a){
    cout<<"\n Displaying Information :"<<endl;
    cout<<" Brand name : "<<a.brand<<endl;
    cout<<"Model name : "<<a.name <<endl;
    cout<<"Price : "<<a.price<<endl;
}
