#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<< * it<<" ";
    }
    
    
    return 0;
}