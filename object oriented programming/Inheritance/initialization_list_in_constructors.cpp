#include<iostream>

using namespace std;

/*
syntax of initialization list in constructor

Constructor (argument-list) : initialization-section
{
  assignment + other code;
}
*/

class Test {
    int a , b;
    public:
    // Test(int i , int j): a(i), b(j)
    // Test(int i , int j): a(i), b(i+j)
    // Test(int i , int j):  b(j) , a(i+b)   //Red Flag : this will create problem as a is initialized first. 
    Test(int i , int j): a(i), b(a+j)        
    {                                            
        cout<<"Constructor is called "<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
    
};

int main(){
    Test(4,6);

    return 0;
}