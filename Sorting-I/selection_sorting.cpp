#include "stdc++.h"

using namespace std;

void selection_sorting(int arr[], int n){
    for (int i = 0; i <= n-2; i++){
        int mini = i;
        for (int j = i; j <= n-1; j++){
            if (arr[j]< arr[mini]){
                mini = j;
            }  
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]= temp;
    }
    

}

int main(){
    int n ;
    cin>> n;
    int arr[10];  // right now i am unable to write arr[n] therefore i use constant value.
    for(int i = 0 ; i<n; i++) cin>>arr[i];
    selection_sorting( arr , n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
   
}