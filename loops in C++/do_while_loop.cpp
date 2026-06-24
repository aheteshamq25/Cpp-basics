#include<iostream>

using namespace std;

int main(){

    int num;
    int i = 1;
    cout<<"Enter a number to get the table: ";
    cin>>num;
    do{
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }while (i<=10);
    
    
}