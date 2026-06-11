#include<iostream>

using namespace std;


class Solution{
    int n;
    int sum = 0;
    public:
    int sumOfDigit(int n){
        
        while (n>0)
        {
            sum += n%10;
            n = n/10;
            
        }
        cout<<"the sum of the digit is "<<sum;
        return 0;

          
    }
    
};


int main(){
    class Solution s;
    s.sumOfDigit(345);
    
    return 0;
}