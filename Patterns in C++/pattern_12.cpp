/*

Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, 
the pattern should look like as below:



1        1
12      21
123    321
1234  4321
1234554321


Print the pattern in the function given to you.

*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
    int n;

public:
    Solution(int value)
    {
        n = value;
    }
    void pattern12()
    {
        int spacer = 2*(n -1);
        
       for(int i =1 ; i<=n ; i++) {
        
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
            
        }
        for (int j = 0; j <spacer; j++)
        {
            cout<<" ";
            
        }
        
        for (int j = i; j >=1; j--)
        {
            cout<<j; 
            
        }
        
        cout<<endl;
        spacer -= 2;
        
       }
    }
};

int main()
{
    Solution s(5);
    s.pattern12();

    return 0;
}
