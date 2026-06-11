#include<iostream>

using namespace std;

class Employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"enter the employee Id ";
        cin>>id;
        count++;
    }

    void getData(void){
        cout<<"the id of your employee is "<<id<< " and the employee number is "<<count<<endl;
       
    }

    static void getCount(){
        cout<<"The value of the count is "<<count<<endl;
    }
};
int Employee :: count;
// count is the static data member of the class Employee.

int main(){
    Employee hisham , lobby , tibu;
    
    hisham.setData();
    hisham.getData();
    Employee::getCount();
    
    lobby.setData();
    lobby.getData();
    Employee::getCount();

    tibu.setData();
    tibu.getData();
     Employee::getCount();
    return 0;
}