#include<iostream>
#include<math.h>

using namespace std;

int seriesOfCube(int n){
    int  half;
    if (n<0)
    {
        return 0;
    }
    else{
    long long half = n * (n+1)/2 ;
    int c = half*half ;
    return c;
    
    }
  
}
int main(){
    long long int num;

    cout<<"Enter a number: ";
    cin>>num;
    long long result = seriesOfCube(num);

    cout<<"the series of cube of nth number is: "<<result<<endl;
    
    return 0;
}