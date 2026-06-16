#include<iostream>
#include<string>

using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS(one , two , more than two)
template <class T1, class T2>
class nameOfClss{
    // body of class
};
*/

template <class T1, class T2>

class MyClass{
    public:
    T1 data1;
    T2 data2;
    MyClass(T1 a, T2 b){
        data1 =a ;
        data2 = b;
    }

    void display(){
        cout<<this->data1<<endl<<this->data2 <<endl;
    }

};


int main(){
    MyClass<int , char> MyClass(12 , 'D');
    
    MyClass.display();
    
    return 0;
}