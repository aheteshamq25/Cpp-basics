#include<iostream>

using namespace std;

int main(){
    int marks[]= {28 , 38,93,39};
    cout<<marks[0]<<endl;

    marks[2]= 294;            //we can change the value of an array
    cout<<marks[2]<<endl;

    // for(int i = 0; i <4; i++){
    //     cout<<"The value of marks "<<i+1<<" is "<<marks[i]<<endl;
    // }

    // int i = 0;
    // while(i<4){
    //     cout<<"The value of marks "<<i+1<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    
    int i =0;
    do{
        cout<<"The value of marks "<<i+1<<" is "<<marks[i]<<endl;
        i++;
    }while(i<4);
    return 0;
}