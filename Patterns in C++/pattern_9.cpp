#include<iostream>

using namespace std;

class Solution{
    public:
    int patternStar(int n){
        // upward stars
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n-i; j++)
            {
                cout<<" ";
            }
            for(int j = 0 ; j < 2* i +1; j++){
                cout<<"*";
            }
            cout<<endl;   
        }
        // downword star
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout<<" ";
            }
            for(int j = 0; j < 2*n - (2*i+1); j++){
                cout<<"*";
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