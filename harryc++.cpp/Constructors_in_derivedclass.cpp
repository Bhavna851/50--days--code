// constructors in derived class
/*
case1:
       class B: public A
       order of execution of constructor : A then B class
case2:
    class C: public B,public A
     order of execution of constructor: B then A and at last C class
case3: special case
   class C: public B,virtual A
      order of execution of constructor : A then B and at last C
 */
#include <iostream>
using namespace std;
class base1
{
protected:
       int data1;

public:
       base1(int a)
       {
              data1 = a;
              cout << "base1 constructor called" << endl;
       }
       void printbase1()
       {
              cout << "value of data1 is: " << data1 << endl;
       }
};
class base2
{
protected:
       int data2;

public:
       base2(int b)
       {
              data2 = b;
              cout << "base2 constructor called" << endl;
       }
       void printbase2()
       {
              cout << "value of data2 is: " << data2 << endl;
       }
};
class derived : public base1, public base2
{
       int data3, data4;

public:
       derived(int a, int b, int c, int d) : base1(a), base2(b)
       {
              data3 = c;
              data4 = d;
              cout << "derived class constructor called" << endl;
       }
       void printderived()
       {
              cout << "value of data3 is: " << data3 << endl;
              cout << "value of data4 is: " << data4 << endl;
       }
};
int main()
{
       derived x(2, 4, 5, 6);
       x.printbase1();
       x.printbase2();
       x.printderived();
       return 0;
}