#include<iostream>

using namespace std;

typedef struct employee   // typedef is used to shorten the struct variable name.
{
    string emailId;
    int password;
    float salary; 
} ep;

int main(){
    ep harry;              //instead of writing struct employee , 
    struct employee marry; // we could simply write ep when we use typedef.
    struct employee carry;

    harry.emailId = "harry123@gmail.com";
    harry.password = 1848798;
    harry.salary = 100000;


    cout<<harry.emailId<<endl;
    cout<<harry.password<<endl;
    cout<<harry.salary<<endl;
    
    return 0;
}