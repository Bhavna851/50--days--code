#include<iostream>
using namespace std;
//forward declaration 
class complex;

class calculator
{
    public:
     int sumofnum(int a,int b){
        return (a+b);
     }
     int sumrealcomplex(complex c1,complex c2);
     int sumcomplex(complex c1,complex c2);
          
     

};


class complex{
    int a,b;
    public:
     int setdata(int v1,int v2){
        a=v1;
        b=v2;
     }//individual declaration of friend function
     //friend int calculator::sumrealcomplex(complex c1,complex c2);
     //friend int calculator:: sumcomplex(complex c1,complex c2);
     //alter: declaring entire calculator class as friend 
     friend class calculator;
     int printnumber(){
        cout<<"complex number "<< a<<" + "<<b<<"i"<<endl;

     }

};
int  calculator:: sumrealcomplex(complex c1,complex c2){//part of class calculator 
    return (c1.a+c2.a);
}
int calculator :: sumcomplex(complex c1,complex c2){
    return(c1.b+c2.b);
}

int main(){
    complex c1,c2;
    c1.setdata(5,4);
    c1.printnumber();
    c2.setdata(3,6);
    c2.printnumber();
    calculator calc;
    int res=calc.sumrealcomplex(c1,c2);
    cout<<"the sum of real part of complex number is: "<<res<<endl;
    int res1=calc.sumcomplex(c1,c2);
    cout<<"the sum of complex part of complex number is: "<<res1<<endl;
    return 0;

}
