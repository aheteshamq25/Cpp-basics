#include<iostream>

using namespace std;

class Solution{
    int num;
    public:
    int reverseDigits(int n){
        num = n;
        int rev_num =0;
        while (n>0)
        {
            rev_num = rev_num * 10 + n%10;
            n  = n/10;
        }
        cout<<rev_num;
        return 0;

    }
   
};

int main(){
    Solution s;
    s.reverseDigits(123); 
    return 0;
}