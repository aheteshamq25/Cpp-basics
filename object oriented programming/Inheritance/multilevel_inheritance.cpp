#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_Number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_Number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_Number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void get_marks(void);
    void set_marks(float, float);
};

void Exam ::get_marks(void)
{
    cout << "The marks obtained in maths is " << maths << endl;
    cout << "The marks obtained in physics is " << physics << endl;
}
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        percentage = (maths + physics) / 2;
        get_roll_number();
        get_marks();
        cout << "The percentage acquired is " << percentage << "%" << endl;
    }
};
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(98, 97);
    harry.displayResult();

    return 0;
}