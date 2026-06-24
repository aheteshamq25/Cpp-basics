/*

Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:


A

AB

ABC

ABCD

ABCDE


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
    void pattern()
    {
        for (int i = 0; i < n; i++)
        {
            for (char ch = 'A'; ch <= 'A' + i; ch++)
            {
                cout << ch << " ";
            }
            cout<<endl;

        }
        
    }
};

int main()
{
    Solution s(5);
    s.pattern();
    return 0;
}
