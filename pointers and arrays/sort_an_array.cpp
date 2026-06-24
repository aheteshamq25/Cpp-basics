#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr = {4, 9 ,3, 8 , 7, 1 };
    
    // sort(arr.begin(), arr.end());   // sorting for accending order.
    sort(arr.begin(), arr.end() , greater<int>());   // sorting for accending order.
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}