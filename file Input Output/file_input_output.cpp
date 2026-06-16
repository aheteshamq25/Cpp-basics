#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("this.txt");
    out<<"Hello this is me Hisham"<<endl;
    out<<"I am a computer science student"<<endl;
    out<<"I am studing in 2nd year."<<endl;

    out.close();

    ifstream in;
    string st , st2;
    in.open("this.txt");

    while (in.eof()==0)
    {
        getline(in , st);
        cout<<st<<endl;
    }

    in.close();
    
    
}