#include<iostream>

using namespace std;

int main(){
    int num ;
    
    int reverseNum = 0;

    cout<<"Enter a number: ";
    cin>>num;

    int duplicate = num;


    while (num>0)
    {
        
        int digit = num %10 ;
        num = num/10;
        reverseNum = (reverseNum * 10) + digit;
    }

    if (duplicate == reverseNum)
    {
        cout<<"true"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }
    
    
    return 0;
}