#include<iostream>

using namespace std;


class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id = inpId;
        salary = 34;
    }
    Employee(){}
    

};

/*
Inheritence syntax:

class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
{
     class members/methods/etc...
}

Note:
1. Default visibility mode is private
2. Public visibility Mode: Public members of the base class becomes 
 public members of the derived class
3. Private visibility mode: Public member of the base class becomes 
 private members of the derived class

*/

class Programmer : Employee{
    public:
    int languageCode = 9;


};


int main(){
   
    return 0;
}