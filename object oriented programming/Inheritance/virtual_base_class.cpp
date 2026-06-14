#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void setNumber(int a)
    {
        roll_no = a;
    }
    void printNumber(void)
    {
        cout << "Your Roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks(void)
    {
        cout << "The marks of Maths is " << maths << endl;
        cout << "The marks of Physics is " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void printScore()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result harry;
    harry.setNumber(420);
    harry.setMarks(99 , 89);
    harry.setScore(95);
    harry.display();

    return 0;
}