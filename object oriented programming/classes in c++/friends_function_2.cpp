#include<iostream>

using namespace std;
class C2;
class C1{
    int val1;
    friend void exchange(C1 & , C2 &);
    public:
    void inData(int a){
        val1 = a;

    }
    void display(){
        cout<<val1<<endl;
    }
};

class C2{
    int val2;
    friend void exchange(C1 & , C2 &);
    public:
    void inData(int b){
        val2 = b;

    }
    void display(){
        cout<<val2<<endl;
    }
};

void exchange(C1 & x , C2 & y){
    int temp = x.val1;
    x.val1= y.val2;
    y.val2 = temp;

}

int main(){
    C1 o1 ;
    C2  o2;
    o1.inData(34);
    o2.inData(64);

    exchange(o1 , o2);
    cout<<"The value of a is : ";
    o1.display();
    cout<<"The value of b is : ";
    o2.display();
    
    return 0;
}