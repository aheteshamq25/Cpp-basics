#include<iostream>

using namespace std;

void swap(int *a , int *b);
// swap with the help of pointer variable.

int main(){
    int num1 , num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    swap(&num1 , &num2);
    cout<<"The value of num1 after swap is "<<num1<<" the value of num2 after swap is "<<num2;

    return 0;
}

void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}