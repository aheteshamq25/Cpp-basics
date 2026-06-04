#include<iostream>

using namespace std;

inline int product(int a ,  int b){

    // it is not recomended to use static in inline functions.
    // static int c = 0;  This will execute once and then
    // c = c + 1;   next this value of c will run , and the value of c will be retained.
    // return a*b+c;
    return a*b;
}

int main(){
    int x, y;
    cout<<"Enter the value of x and y  ";
    cin>>x>>y;
    cout<<"The product of a and b is "<<product(x , y);

    return 0;
}