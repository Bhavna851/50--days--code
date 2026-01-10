//ambiguity resolution 
#include<iostream>
using namespace std;
class A 
{
    public:
        void print(){
            cout<<"\n inside class A";
        }
};
class B
{public:
    void print(){
        cout<<"\n inside class B";
    }
};
class derived: public A ,public B{
    int a;
    public:
    void print(){
       // print();//to solve this problem 
      //syntax: baseclass_name :: function_name
     A:: print();
    }
};




int main(){
    A obj1;
    obj1.print();
    B OBJ2;
    OBJ2.print();
    derived obj3;
    obj3.print();
  
   
    return 0;
}