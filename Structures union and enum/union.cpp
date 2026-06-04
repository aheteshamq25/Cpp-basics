#include<iostream>

using namespace std;

typedef struct employee   // typedef is used to shorten the struct variable name.
{
    string emailId;
    int password;
    float salary; 
} ep;

union money
{
    int rice;
    char car;
    float pound;
};


int main(){
    union money m1;
    m1.rice = 21;
    cout<<m1.rice;
    
    return 0;
}