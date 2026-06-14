#include<iostream>

using namespace std;

int main(){
    // Basic example
    int a = 4;
    int*  ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;


    // new keywords
    int *p = new int(48);
    cout<<"the value at address of p is "<<*(p)<<endl;

    int *arr = new int(3);
    arr[0] = 23;
    *(arr+1) = 29;
    arr[2] = 14;
    delete [] arr;       //delete operator

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    return 0;
}