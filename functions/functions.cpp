#include<iostream>

using namespace std;

int sum(int a , int b);

int main(){
    int num1 , num2 ;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The sum of the two numbers are "<<sum(num1 , num2);
    return 0;
}

int sum(int a , int b){
    // a and b are formal parameters. which takes value of actual parameters
    int c = a + b;
    return c ;
}