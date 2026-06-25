#include<iostream>

using namespace std;

int main(){
    int num , sum = 0;
    int last_digit;
    
    cout<<"Enter a number: ";
    cin>>num;

    while (num>0)
    {
        last_digit = num%10;
        sum = sum + last_digit;
        num = num/10;
    }

    cout<<"The sum of all the digits of the entered number is: "<<sum;
    
    return 0;
}