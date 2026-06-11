#include<iostream>

using namespace std;

class Solution{
    public:
    int patternStar(int n){
        int spacer = n-1;

        for (int i = 0; i < n; i++)
        {   
            for(int j =0; j <spacer; j++)
            {
                cout<<" ";
            }
            for(int j = 0; j<i+1 ; j++ ){
                cout<<"* ";
            }
            spacer--;
            cout<<endl;
        }
    }

};

int main(){
    Solution s;
    s.patternStar(5);
    
    return 0;
}