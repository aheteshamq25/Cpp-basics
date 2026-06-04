#include<iostream>

using namespace std;

int fact(int n);
int fibo(int n);
int main(){
    int num;
    cout<<"Enter a number to calculate its factorial: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is " <<fact(num)<<endl; 

    cout<<"The value of term "<<num<<"th is " <<fibo(num);    

    return 0;
}

int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    return n* fact(n-1);   
}

int fibo(int n){
    if(n<2){
        return 1;
    }
   
    return fibo(n-1) + fibo(n-2);
}