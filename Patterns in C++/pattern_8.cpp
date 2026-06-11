#include<iostream>

using namespace std;

class Solution{
    public:
    int patternStar(int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0;  j< i; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j<n-i; j++)
            {
                cout<<"* ";
            }
            for (int j = 0; j< i; j++)
            {
                cout<<" ";
            }

            cout<<endl;
            
        }
        
    }

};

int main(){
    Solution s;
    s.patternStar(5);
    
    return 0;
}