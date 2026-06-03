#include<iostream>

using namespace std;

int global = 5;

int main(){
    int global = 10;   //variable name of local and global can be same but local variable will be prioritized.
    global = 59;
    cout<<global;
    return 0;
}