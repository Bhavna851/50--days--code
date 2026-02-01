//5Hybrid inheritance 
#include<iostream>
using namespace std;
class A{
    public:
      void printa(){
        cout<<"welcome to c++ "<<endl;
      }
};
class B :public A{
    public:
      void printb(){
        cout<<" lets start coding "<<endl;
      }
};
class C{
    public:
       void printc(){
        cout<<" c++ is totally  based on oop concept"<<endl;
       }
};
class D: public B,public C
{
    public:
     void printd(){
        cout<<"lets solve 2 questions daily on hackerrank platform "<<endl;
     }
};
int main(){
    D aa;
    aa.printa();
    aa.printb();
    aa.printc();
    aa.printd();
    return 0;}