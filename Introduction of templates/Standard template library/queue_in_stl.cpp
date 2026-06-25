#include<iostream>
#include <queue>

using namespace std;



void printQueue(queue<int> q1){
    queue<int> q2 = q1;
    while (!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();

    }
    
}
int main(){
    queue<int> q;
    for (int i = 0; i <5; i++)
    {
        q.push(i);
    }
    printQueue(q);

    cout<<"The size of the queue is "<<q.size()<<endl;
    cout<<"The front element of the queue is "<<q.front()<<endl;
    cout<<"The last element of the queue is "<<q.back()<<endl;
    cout<<"The pop  the front element of the queue is "<<endl;
    q.pop();
    printQueue(q);
    
    return 0;
}