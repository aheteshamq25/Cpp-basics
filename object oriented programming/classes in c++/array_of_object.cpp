#include<iostream>

using namespace std;


class Employee
{
private:
    int id;
    int salary;
public:
    void setId(){
        salary = 125;
        cout<<"enter the id: ";
        cin>>id;
    }
    void getId(){
        cout<<"The id of the employee is "<<id<<endl;
    }
};

int main(){
    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb->setId();
        fb->getId();
    }
    
    return 0;
}