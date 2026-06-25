#include<iostream>

using namespace std;

int main(){
    int num ;
    int count = 0 ;

    cout<<"Enter a Number: ";
    cin>>num;

    for (int i = 0; i*i <= num; i++)
    {
        if (num % i == 0 )
        {
            count++;
            if ((num/ i) != i)
            {
                count++;
            }
            
        }
        
    }
    if (count == 2) {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    
    return 0;
}