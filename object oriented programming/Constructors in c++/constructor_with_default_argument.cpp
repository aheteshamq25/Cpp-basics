#include<iostream>

using namespace std;

class Simple{
    int data1;
    int data2;
    public:
    Simple(int a , int b =9){
        data1 = a;
        data2 = b;
    }
    void printNum();
};

void Simple :: printNum(){
    cout<<"the value of data1 and data2 is "<<data1<< " and "<<data2<<endl;
}

int main(){
    
    Simple r(1,7);
    r.printNum();

    Simple s(1);
    s.printNum();
    
    return 0;
}