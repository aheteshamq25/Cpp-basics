#include<iostream>

using namespace std;

void swapReferenceVar(int &a , int &b);

int main(){
    int num1 , num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    swapReferenceVar(num1 , num2);
    cout<<"The value of num1 after swap is "<<num1<<" the value of num2 after swap is "<<num2;

    return 0;
}

void swapReferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}