#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Object (Functor): function wrapped in a class so that 
    // it can be available like an object

    int arr[]= {1, 23, 35, 8 , 7 , 6};
    // sort(arr , arr+6);
    sort(arr , arr+6, greater<int>());
     
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
     
    return 0;
}