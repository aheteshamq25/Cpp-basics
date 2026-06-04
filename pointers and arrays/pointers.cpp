#include<iostream>

using namespace std;

int main(){
    // what is pointers ? ----> it is a data type which holds the address of any variable.

    int a =5;
    int * b = &a;

    // & ---> (address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at)dereference operator
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;


    // pointer to pointer
    int ** c = &b;
    cout<<"the address of b "<<c<<endl;
    cout<<"the address of b "<<&b<<endl;
    cout<<"the value at address of c "<<*c<<endl;
    cout<<"the value at address of value at c "<<**c<<endl;

    
   
    return 0;
}