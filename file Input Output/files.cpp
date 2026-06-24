#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
*/

/*
In order to work with files in C++ , you will have to open it.
There are two ways to open a file:
1. using the constructor.
2. using the member function open() of the class.
*/
using namespace std;

int main(){
    //opening files using constructor.

    string st = "hello world ";
    string st2 ;
    ofstream out("sample.text");
    out<<st2;
    // ifstream in("sample.txt");
   
    return 0;
}