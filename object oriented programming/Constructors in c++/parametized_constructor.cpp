#include<iostream>

using namespace std;
class Complex{

    int a ,  b;
    public:

    Complex(int,int);   // Constructor declaration.

    void printNumber(){
        cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex :: Complex( int x , int y)    //This is a parametized constructor as it takes parameter.
{
    a = x ;
    b = y;
}
int main(){
    // Implicit Call
    Complex c(4,5);
    c.printNumber();

    // Explicit Call
    Complex d = Complex(23 ,44);
    d.printNumber();
    
    return 0;
}