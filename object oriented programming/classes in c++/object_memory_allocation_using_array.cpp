#include <iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void setPrice();
    void displayPrice();
};

void Shop ::setPrice()
{

    cout << "Enter the Item Id for no. " << counter + 1 << " :";
    cin >> itemId[counter];
    cout << "Enter the Item Price for no. " << counter + 1 << " :";
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}