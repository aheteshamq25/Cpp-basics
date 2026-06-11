#include<iostream>

using namespace std;
class Complex{

    int a ,  b;
    public:


    // creating a constructor
    // Constructor is a special member function with same name as of class.
    // it is used to initialize the object of the class.
    // it is automatically invoked whenever an object is created.

    Complex(void);   // constructor declaration.

    void printNumber(){
        cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex :: Complex(void)    //This is the default constructor as it takes no parameter.
{
    a = 10 ;
    b = 12;
}
int main(){
    Complex c;
    c.printNumber();
    
    return 0;
}

// Characteristic of Construnctors

// --- it should be declared in the public section of the class.
// --- They are automatically invoked whenever the object is created
// --- they cannot return values and doesn't have return type.
// --- it can have default arguments.
// --- we cannot refer to thier values.