#include<iostream>

using namespace std;

class Triangle{
    public:
    void floydsTriangle(int n){
        int count =1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                cout<<count<<" ";
                count++;
            }

            cout<<endl;
            
        }
        

    }
};

int main(){
    Triangle t;
    t.floydsTriangle(5);
    return 0;
}