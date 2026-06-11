#include<iostream>

using namespace std;

class Binary 
{ 
    string s;
    public:
      void read();
      void chk_bin();
      void display();
      void ones_compliment();


};

void Binary :: read(){
    cout<<"Enter a binary number ";
    cin>>s;
}

void Binary :: chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!= '0' && s.at(i)!= '1')
        {
            cout<<"Incorrect binary type"<<endl;
            exit(0);
        }
        
    }
    
}
void Binary :: display(){
    cout<<"displaying Your binary number: "<<s<<endl;
}
void Binary :: ones_compliment(){
    for (int i = 0; i < s.length(); i++){
        if(s.at(i)== '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

int main(){
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    
    return 0;
}