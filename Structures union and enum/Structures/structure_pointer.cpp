#include<iostream>

using namespace std;

typedef struct num{
    int x,y;
}num;

int main(){
    num p ={6,9};
    num *ptr = &p;

    cout<<"value of x: "<<ptr->x<<endl;
    cout<<"value of y: "<<ptr->y<<endl;

    return 0;
}