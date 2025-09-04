#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number of day: ";
    cin>>a;
    cout<<"Before swap: a = "<<a<<endl;
    switch (a)
    {
    case 1:
        cout<<"Case Monday"<<endl;
    case 2:
        cout<<"Case Tuesday"<<endl;
    case 3:
        cout<<"Case Wednesday"<<endl;
    case 4:
        cout<<"Case Thursday"<<endl;
    case 5:
        cout<<"Case Friday"<<endl;
    case 6:
        cout<<"Case Saturday"<<endl;
    case 7:
        cout<<"Case Sunday"<<endl;
    default:
        break;
    }
}