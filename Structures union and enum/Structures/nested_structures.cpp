#include<iostream>
using namespace std;


typedef struct child
{
    int x;
    char y;
}ch;

typedef struct parent{
    int a;
    ch b;
    
}pr;

int main(){
    pr p;
    p.a =6;
    p.b.x = 10;
    p.b.y = 'A';
    cout<<"p.a :"<<p.a<<endl;
    cout<<"p.b.x :"<<p.b.x<<endl;
    cout<<"p.b.y :"<<p.b.y<<endl;

    return 0;
}