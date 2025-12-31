//constructor overloading
//when we make more no of constructors of same name these is known as constructor overloading
//constructors may differ in no. of argument or  type of argument 
#include<iostream>
using namespace std;
class complex{
    int a,b;
      public:
        complex(int x,int y)//parameterized constructor
        {a=x;
         b=y;
        }
        complex(int x){//parameterized constructor
            a=x;
            b=x;
        }
        complex()//default constructor
        {
            a=4;
            b=6;
        }
        void print(){
            cout<<"complex number "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c1(2,3);
    c1.print();
    complex c2(6);
    c2.print();
    complex c3;
    c3.print();
    return 0;
}
