#include<iostream>

using namespace std;

template <class T>

class Harry{
    public:
    T data ;
    Harry(T a){
        data = a;
    }
    void display();
};

template <class T>
void Harry <T> :: display(){
    cout<<data<<endl;
}

int main(){
    Harry <int> h(5);
    h.data;
    cout<<h.data<<endl;
    h.display();
    
    return 0;
}