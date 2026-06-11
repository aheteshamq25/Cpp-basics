#include<iostream>

using namespace std;

class Solution{

    public:
    void evenOdd(int a , int b){
       if (a%2==0)
       {
        cout<<a<<endl;
       }
       else
       {
        cout<<b<<endl;
       }
       if(a%2!= 0){
        cout<<a<<endl;
       }
       else{
        cout<<b<<endl;
       }
    }
};



int main(){
    class Solution o1; 
    o1.evenOdd( 9, 10);
    
    
    return 0;
}

