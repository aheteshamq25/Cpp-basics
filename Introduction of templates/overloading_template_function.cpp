#include<iostream>

using namespace std;


void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am first func() "<<a<<endl;
}

int main(){
    // which func() will be executed in this scenerio.

    func(4);   // exact func will be prioritized.
    return 0;
}