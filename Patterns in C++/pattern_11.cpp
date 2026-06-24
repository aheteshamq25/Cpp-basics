/*

Given an integer n.
You need to recreate the pattern
given below for any value of N.
Let's say for N = 5,
the pattern should look like as below:



1

0 1

1 0 1

0 1 0 1

1 0 1 0 1


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
    void pattern11()
    {
        int starter = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                starter = 1;
            }
            else
            {
                starter = 0;
            }

            for (int j = 0; j <= i; j++)
            {
                cout << starter << " ";
                starter = 1 - starter;
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution s(5);
    s.pattern11();

    return 0;
}