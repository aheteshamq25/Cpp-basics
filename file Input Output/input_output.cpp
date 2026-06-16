#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // connecting our file with hout stream , hout(variable name) which could be anything.
    ofstream hout("this.txt");
    cout<<"Enter your Name: ";
    string name;
    cin>>name;

    // writing a string to the file this.txt . 
    hout<<"My name is " + name;
    hout.close();

    ifstream hin("this.txt");
    string content;
    hin>>content;
    cout<<"The content of the file is: "<<content;
    hin.close();
    return 0;
}