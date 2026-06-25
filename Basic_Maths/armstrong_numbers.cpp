#include<iostream>

using namespace std;

int main(){
    int num;
    int sum =0;

    cout<<"Enter a number: ";
    cin>>num;

    while (num > 0)
    {
        int digit = num % 10 ;
        int cubeDigit = digit*digit*digit;
        sum = sum + cubeDigit;
        num = num /10;
    }
    cout<<sum;
    
    return 0;
}