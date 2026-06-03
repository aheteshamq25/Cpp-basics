#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=18 && age <50){
        cout<<"You can come to my party"<<endl;

    }
    else{
        cout<<"You are not allowed to come"<<endl;
    }
    return 0;
}