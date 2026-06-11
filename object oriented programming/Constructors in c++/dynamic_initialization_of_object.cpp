#include <iostream>

using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float returnValue;
    float interestRate;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, int r);  //r can be a value like 14;
    BankDeposit(int p, int y, float r); // r can be a float value like 0.04
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
     returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue* (1 + interestRate);
    }
    
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue* (1 + interestRate);
    }
    
}

void BankDeposit :: show(){
    cout<<"The amount at the time of deposit was "
    <<principal<<endl
    <<"After years "
    <<year<<". Return amount is "<<returnValue;
}

int main(){
    BankDeposit bk1 , bk2 , bk3;
    int p , y;
    float r ;
    int R;

    cout<<endl<<"Enter the value of p , y , r"<<endl;
    cin>>p>>y>>r;
    bk1 = BankDeposit( p , y, r );
    bk1.show();

    cout<<endl<<"Enter the value of p , y , r"<<endl;
    cin>>p>>y>>R;
    bk2 = BankDeposit( p , y, R );
    bk2.show();

    return 0;
}