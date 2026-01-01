//passing default argument to constructor ,these is useful in the case where no value is provided for that
//default argument then  in such condition the default value is used.
#include<iostream>
using namespace std;
class demo{
    int a,b,c;
    public:
       demo(int x,int y=7,int z=5){
        a=x;
        b=y;
        c=z;
       }
      void print(){
        cout<<"the value of a , b and c  is "<<a<<","<<b<<" and "<<c<<endl;
      }
};
int main(){
    demo d1(4,3,7);
    d1.print();
    return 0;

}