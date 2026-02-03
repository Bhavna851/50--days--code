//inheritance: multilevel inheritance 

/*#include <iostream>
#include <math.h>
using namespace std;
class simple_calculator
{
protected:
  int a, b;

public:
  int setvalue()
  {
    cout << "enter two numbers " << endl;
    cin >> a >> b;
  }
  int getvalue()
  {
    cout << "value of a is " << a << endl << "value of b is " << b << endl;
  }
  void simple_calculation()
  {
    cout << " output of simple calculator " << endl;

    cout << "addition of a and b is       = " << a + b << endl;
    cout << "substraction of a and b is   = " << a - b << endl;
    cout << "multiplication of a and b is = " << a * b << endl;
    cout << "division of a and b is       = " << a / b << endl;
    cout << "modulo of a and b is         = " << a % b << endl;
  }
};
class scientific_calculator : public simple_calculator
{
public:
  void scientific_calculation()
  {

    cout << "----------------------------------------------" << endl;

    cout << "output of scientific calculator " << endl;

    cout << "square root of a = " << sqrt(a) << endl;
    cout << "square root of b = " << sqrt(b) << endl;
    cout << "cube root of a   = " << cbrt(a) << endl;
    cout << "cube root of b   = " << cbrt(b) << endl;
    cout << "power of a  raised to b is = " << pow(a, b) << endl;
  }
};
class Hybrid_calculator : public scientific_calculator
{
public:
  void display()
  {

    simple_calculation();
    scientific_calculation();
  }
};
int main()
{
  Hybrid_calculator x;
  x.setvalue();
  x.getvalue();
  x.display();
  return 0;
}*/
//inheritance: multiple inheritance
#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
 float a,b;
  public:
     void getdatasimple(){
      cout<<"enter value of a: "<<endl;
      cin>>a;
      cout<<"enter value of b: "<<endl;
      cin>>b;
     }
     void operation_simple(){
      cout<<"addition of a and b is : "<<a+b<<endl;
      cout<<"substraction of a and b is : "<<a-b<<endl;
      cout<<"multiplication of a and b is : "<<a*b<<endl;
      cout<<"division of a and b is: "<<a/b<<endl;

     }
};
class scientificcalculator{
   float a,b;
  public:
     void getdatascientific(){
      cout<<"enter value of a: "<<endl;
      cin>>a;
      cout<<"enter value of b: "<<endl;
      cin>>b;
     }
     void operation_scientific(){
      cout<<"value of sin(a) is: "<<sin(a)<<endl;
      cout<<"value of sin(b) is: "<<sin(b)<<endl;
      cout<<"value of cos(a) is: "<<cos(a)<<endl;
      cout<<"value of cos(b) is: "<<cos(b)<<endl;
      cout<<"value of a raised power b  is: "<<pow(a,b)<<endl;
     }
};
class hybrid: public simplecalculator,public scientificcalculator{

};
int main(){
  hybrid obj;
  obj.getdatasimple();
  obj.operation_simple();
  obj.getdatascientific();
  obj.operation_scientific();
  return 0;
}