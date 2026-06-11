#include<iostream>

using namespace std;

class Solution {
  public:
    double cToF(int C) {
        // code here
        const float MULTIPLIER = 9.0 / 5.0;
        const float OFFSET = 32.0;
        
        double F = (C * MULTIPLIER) + OFFSET;
        cout<<F;
        return 0;
    }
};

int main(){
    Solution f;
    f.cToF(37);
    return 0;
}