#include<iostream>
using namespace std;
//forward declaration
class complex;
class calculator
{
    public:
     int sum(int a,int b){
        return(a+b);
     }
     int sumrealcomplex(complex c1,complex c2);
     int sumcompcomplex(complex c1,complex c2);
        
     
};
class complex  
{int  a,b;
    public:
    //friend int calculator:: sumrealcomplex(complex c1, complex c2);
    //friend int calculator:: sumcompcomplex(complex c1,complex c2);
    friend class calculator;
      int setdata(int v1,int v2){
        a=v1;
        b=v2;
      }
    int printnumbers(){
        cout<<"complex number "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator:: sumrealcomplex(complex c1,complex c2){
    return(c1.a+c2.a);
}
int calculator:: sumcompcomplex(complex c1,complex c2){
    return(c1.b+c2.b);
}

int main(){
    complex c1,c2;
    c1.setdata(1,4);
    c1.printnumbers();
    c2.setdata(3,2);
    c2.printnumbers();
    calculator calc;
 int res=calc.sumrealcomplex(c1,c2);
 cout<<"the sum of real part is "<<res<<endl;
 int resc=calc.sumcompcomplex(c1,c2);
 cout<<"the sum of complex part is "<<resc<<endl;
 return 0;

}
