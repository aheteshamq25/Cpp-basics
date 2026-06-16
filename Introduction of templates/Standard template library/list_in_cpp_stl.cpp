#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for ( it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}

int main(){
    list<int>  list1;  //list of 0 length
    list<int> list2(7); //Empty list of size 7.
    
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(12);
    list1.push_back(1);
    display(list1);
    cout<<endl;
    
    list1.remove(5);
    display(list1);


   
    
    return 0;
}