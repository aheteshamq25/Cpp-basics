#include<iostream>

using namespace std;


class Complex
{
    int a , b;
    public:
    Complex(int x){
        a = x;
        b = 0;
    }

    Complex(){
        a = 0;
        b  = 0;
    }
    Complex(int x ,  int y){
        a = x;
        b = y;
    }

    

    void printNumber(){
        cout<<"the complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};


int main(){
    Complex c1(12 ,23);
    c1.printNumber();

    Complex c2;
    c2.printNumber();

    Complex c3(6);
    c3.printNumber();


    
    return 0;
}