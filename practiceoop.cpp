#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void get_number(void)
    {
        cout << "your roll no is:" << roll_no << endl;
    }
};
class Test : public virtual Student
{
protected:
    float maths, physics;

public:
    void set_marks(float a1, float a2)
    {
        maths = a1;
        physics = a2;
    }
    void get_marks(void)
    {
        cout << "your physics marks is : " << physics <<" "<< "and maths marks is " << maths << endl;
    }
};
class sports : public virtual Student
{
protected:
    int score;

public:
    void set_score(int n1)
    {
        score = n1;
    }
    void get_score(void)
    {
        cout << "your pt score is: " << score << endl;
    }
};
class result : public Test, public sports
{

    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        get_number();
        get_marks();
        get_score();
        cout << "your total is: " << total << endl;
    }
};

int main()
{
    result aish;
    aish.set_number(1);
    aish.set_marks(98.0, 98.5);
    aish.set_score(85);
    aish.display();

    return 0;
}