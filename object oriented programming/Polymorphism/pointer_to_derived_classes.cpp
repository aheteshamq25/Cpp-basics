#include<iostream>

using namespace std;


class BaseClass{

    public:
    int var_base;

    void baseDisplay(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
    }

};

class DerivedClass : public BaseClass{
    public:
    int var_derived;

    void derivedDisplay(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
        cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
    }


};
int main(){
    BaseClass * base_class_pointer;
    BaseClass base_obj;
    DerivedClass derived_obj;
    base_class_pointer = &base_obj;

    base_class_pointer->var_base = 23;
    base_class_pointer->baseDisplay();
    
    DerivedClass * derived_class_pointer;

    derived_class_pointer->var_derived = 234;
    derived_class_pointer->var_base = 34;
    derived_class_pointer->derivedDisplay();

    
    return 0;
}