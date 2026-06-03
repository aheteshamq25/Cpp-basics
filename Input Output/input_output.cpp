#include<iostream>

using namespace std;

int main()
{
    int num1 , num2;
    cout<<"Enter the value of first number :\n"; //this << is called insertion operator
    cin>>num1; // >> is called extraction.

    cout<<"Enter the value of second number :\n"; //this << is called insertion operator
    cin>>num2;

    int sum = num1 + num2;

    cout<<"the sum of the two number is : "<< sum ;
    
    
    return 0;
}
