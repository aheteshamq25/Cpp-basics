#include<iostream>

using namespace std;

int main(){
    int count = 0;
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    while (num>0)
    {
        // int lastDigit = num%10 ;
        count = count+1;
        num = num/10;
    }

    cout<<"The number of digits are: "<<count;
    


    return 0;
}