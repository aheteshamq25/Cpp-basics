#include<iostream>

using namespace std;
class Complex{

    int a ,  b;
    public:

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
