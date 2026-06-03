#include<iostream>

using namespace std;

int c = 34;

int main(){
    // int a, b, c;
    // cout<<"Enter the number a: ";
    // cin>>a;
    // cout<<"Enter the number b: ";
    // cin>>b;

    // c = a + b ;
    // cout<<"the sum is c = "<<c<<endl;
    // cout<<"The globle value of c ="<<::c;  // ---> [::] it will give us value of global c.

    // ************ Reference variable *******************
    float x = 445;
    cout<<x<<endl;

    float & y = x;
    cout<<y<<endl;

    return 0;

}