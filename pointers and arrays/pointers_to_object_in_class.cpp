#include<iostream>

using namespace std;

class Complex{
    int real , imaginary;
    public:
    void setData(int a , int b){
        real = a;
        imaginary = b;
    }
    void getData(){

        cout<<"The real part of complex is "<<real<<endl;
        cout<<"The imaginary part of complex is "<<imaginary<<endl;
    }
};

int main(){
    // Complex c1;
    // c1.setData(23, 4);
    // c1.getData();

    Complex *ptr = new Complex;
    (*ptr).setData(23 , 4);
    (*ptr).getData();

    // arrow operator
    ptr->setData(20 ,3);    //this is exactly as (*ptr).setData(20 , 3);
    ptr->getData();         // this is exactly as (*ptr).getData();

    
    return 0;
}