#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int a =77 , b = 234 , c= 2345;
    cout<<"the value of a without setw is "<<a<<endl;
    cout<<"the value of b without setw is "<<b<<endl;
    cout<<"the value of without setw c is "<<c<<endl;
//    endl and setw is a manipulator.
    cout<<"the value of a is "<<setw(4)<<a<<endl;
    cout<<"the value of b is "<<setw(4)<<b<<endl;
    cout<<"the value of c is "<<setw(4)<<c<<endl;


    return 0;

}