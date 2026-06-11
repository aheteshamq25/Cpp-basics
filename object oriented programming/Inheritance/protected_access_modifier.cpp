#include<iostream>

using namespace std;

/*
	                      Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited              	Not Inherited            Not Inherited              
Protected members           Protected                   Private                  Protected                    
Public members           	Public	Private             Protected                Protected


*/

class base{

};

class derived : protected base{

};


int main(){
    
    return 0;
}
