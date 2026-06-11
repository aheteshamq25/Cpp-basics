#include <iostream>

using namespace std;

class Complex;

class Calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // individually declaring the function as friends
    // friend int Calculator::sumRealComplex(Complex, Complex);
    // friend int Calculator::sumComComplex(Complex, Complex);

    // declaring whole class as friend
    friend class Calculator; 


public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    cout << "The real part of the complex is "<<(o1.a + o2.a)<<endl;
    return 0;
}

int Calculator :: sumComComplex(Complex o1, Complex o2)
{
    cout <<"The Complex part of the Complex is " <<(o1.b + o2.b)<<endl;
    return 0;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(3, 4);
    o2.setNumber(4, 55);
    o1.printNumber();
    o2.printNumber();

    Calculator c;
    c.sumRealComplex(o1, o2);
    c.sumComComplex(o1, o2);

    return 0;
}