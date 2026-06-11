#include<iostream>

using namespace std;

class Number{
    int n;
    public:
    Number(){
        n = 0;
    }
    Number(int a){
        n = a;
    }
    Number(Number &n){
        cout<<"Copy constructor is called "<<endl;
    }
    void display(){
        cout<<"The number of this object is "<<n<<endl;
    }
};

int main(){
    Number x , y, z(4);
   
    x.display();
    y.display();
    z.display();
    
    Number z1(z);  //copy constructor invoked
    z1.display();

    return 0;
}