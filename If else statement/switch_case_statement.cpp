#include<iostream>

using namespace std;


int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"you are 18 years old"<<endl;
        break;
    case 25:
        cout<<"you are 25 years old"<<endl;
        break;
    case 10:
        cout<<"you are 10 years old"<<endl;
        break;
    default:
        cout<<"This is an special case"<<endl;
        break;
    }

    cout<<"We have executed switch-case properly";

    return 0;
}