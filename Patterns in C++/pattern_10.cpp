/*

Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, 
the pattern should look like as below:



*

**

***

****

*****

****

***

**

*


*/



#include<iostream>

using namespace std;

class Solution{
    int n;
    public:
    Solution(int value){
        n = value;
    }
    void pattern10(){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j< i+1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
        for (int i = 1; i<n; i++)
        {
            for (int j = n; j>i; j--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

};


int main(){
    Solution s(5);
    s.pattern10();
    return 0;
}