#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int num1, num2, option;

public:
    void utility()
    {

        cout << "Which operation do you want to perform: " << endl;
        cout << "1. (a + b): " << endl;
        cout << "2. (a - b): " << endl;
        cout << "3. (a * b): " << endl;
        cout << "4. (a / b): " << endl;

        cout << "Choose (1/2/3/4)" << endl;
        cin >> option;
        if (option == 1 || option == 2 || option == 3 || option == 4)
        {
            cout << "Enter number (a): " << endl;
            cin >> num1;
            cout << "Enter number (b): " << endl;
            cin >> num2;
        }
        else
        {
            cout << "WARNING: Select (1/2/3/4) " << endl;
        }
    }
    int calculate()
    {
        switch (option)
        {
        case 1:
            cout << "result is " << num1 + num2;
            break;
        case 2:
            cout << "result is " << num1 - num2;
            break;
        case 3:
            cout << "result is " << num1 * num2;
            break;
        case 4:
            cout << "result is " << num1 / num2;
            break;

        default:
            break;
        }
    }
};

class ScientificCalculator
{
    int num1, num2, option;

public:
    void utility()
    {

        cout << "Which operation do you want to perform: " << endl;
        cout << "1. Perform (a ^ b): " << endl;
        cout << "2. Perform sqrt(a): " << endl;
        cout << "3. Perform log(a): " << endl;
        cout << "4. Perform absolute value of (a): " << endl;

        cout << "Choose (1/2/3/4)" << endl;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter number (a): " << endl;
            cin >> num1;
            cout << "Enter number (b): " << endl;
            cin >> num2;
        }
        else if (option == 2 || option == 3 || option == 4)
        {
            cout << "Enter number (a): " << endl;
            cin >> num1;
        }
        else
        {
            cout << "Select (1/2/3/4)" << endl;
        }
    }
    int calculate()
    {
        switch (option)
        {
        case 1:
            cout << "result is " << pow(num1, num2);
            break;
        case 2:
            cout << "result is " << sqrt(num1);
            break;
        case 3:
            cout << "result is " << log(num1);
            break;
        case 4:
            cout << "result is " << abs(num1);
            break;

        default:
            break;
        }
    }
};

class HibridCalculator : public SimpleCalculator, public ScientificCalculator
{
    double num1, num2;
    int option;

public:
    void utility()
    {

        cout << "Which operation do you want to perform: " << endl;
        cout << "1. (a + b): " << endl;
        cout << "2. (a - b): " << endl;
        cout << "3. (a * b): " << endl;
        cout << "4. (a / b): " << endl;

        cout << "5. Perform (a ^ b): " << endl;
        cout << "6. Perform sqrt(a): " << endl;
        cout << "7. Perform log(a): " << endl;
        cout << "8. Perform absolute value of (a): " << endl;

        cout << "Choose (1/2/3/4/5/6/7/8)" << endl;
        cin >> option;

        if (option == 1 || option == 2 || option == 3 || option == 4 || option == 5)
        {
            cout << "Enter number (a): " << endl;
            cin >> num1;
            cout << "Enter number (b): " << endl;
            cin >> num2;
        }
        else if (option == 6 || option == 7 || option == 8)
        {
            cout << "Enter number (a): " << endl;
            cin >> num1;
        }

        else
        {
            cout << "WARNING: Select (1/2/3/4/5/6/7/8) " << endl;
        }
    }
    int calculate()
    {
        switch (option)
        {
        case 1:
            cout << "result is " << num1 + num2;
            break;
        case 2:
            cout << "result is " << num1 - num2;
            break;
        case 3:
            cout << "result is " << num1 * num2;
            break;
        case 4:
            cout << "result is " << num1 / num2;
            break;
        case 5:
            cout << "result is " << pow(num1, num2);
            break;
        case 6:
            cout << "result is " << sqrt(num1);
            break;
        case 7:
            cout << "result is " << log(num1);
            break;
        case 8:
            cout << "result is " << abs(num1);
            break;

        default:
            break;
        }
    }
};

int main()
{
    int choice;
    cout << "==============================================================" << endl;
    cout << endl;
    cout << "WELCOME TO HISHAM\n'S CALCULATOR" << endl;
    cout << endl;
    cout << "==============================================================" << endl;
    cout << endl;
    cout << endl;

    while (true)
    {
        cout << "\n\nWhich calculator do you what to use ? " << endl;
        cout << "1. simple calculator" << endl;
        cout << "2. scientific calculator" << endl;
        cout << "3. Hibrid calculator (simple and scientific both)" << endl;
        cout << "4. Exit the program" << endl;
        cout << endl;

        cout << "select (1/2/3/4) " << endl;
        cin >> choice;

        if (choice == 1)
        {
            SimpleCalculator s;
            s.utility();
            s.calculate();
        }
        else if (choice == 2)
        {
            ScientificCalculator sc;
            sc.utility();
            sc.calculate();
        }
        else if (choice == 3)
        {
            HibridCalculator hc;
            hc.utility();
            hc.calculate();
        }
        else if(choice == 4)
        {
            cout << endl;
            cout << "We are sorry to see you going..." << endl;
            cout << "program is exiting..." << endl;
         
            cout << "========================================================" << endl;
            cout << "Thanks for running this program  " << endl;
            cout << "========================================================" << endl;

            break;
        }
        else{
            cout<<"Please enter the correct option"<<endl;
        }
        
        
    }

    return 0;
}