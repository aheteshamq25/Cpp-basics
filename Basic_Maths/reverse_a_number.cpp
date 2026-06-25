#include<iostream>

using namespace std;

int main(){
    int num ;
    int reverseNum = 0;

    cout<<"Enter a number: ";
    cin>>num;


    while (num>0)
    {
        int digit = num %10 ;
        num = num/10;
        reverseNum = (reverseNum * 10) + digit;
    }

    cout<<"reversed num is "<<reverseNum;
    
    return 0;
}