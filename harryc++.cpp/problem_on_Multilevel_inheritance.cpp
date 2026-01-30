//MULTILEVEL INHERITANCE
/*one class is being inherited by another class and these another class is being inherited by some other
class*/

#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void setdata(int r)
    {
        roll_no = r;
    }
    void get_roll_no()
    {
        cout << "roll_no of student is " << roll_no << endl;
    }
};
class exam : public student
{
protected:
    float sub1;
    float sub2;

public:
    void setmarks(int m1, int m2)
    {
        sub1 = m1;
        sub2 = m2;
    }
    void getmarks(void)
    {
        cout << "marks of subject 1 is " << sub1 << endl;
        cout << "marks of subject 2 is " << sub2 << endl;
    }
};
class result : public exam
{
    float percentage;

public:
    int calculate()
    {
        percentage = (sub1 + sub2) / 200 * 100;
    }
    void display()
    {
        cout << "your percentage is " << percentage << endl;
    }
};
int main()
{
    result anya;
    anya.setdata(105);
    anya.get_roll_no();
    anya.setmarks(98, 89);
    anya.getmarks();
    anya.calculate();
    anya.display();
    return 0;
}