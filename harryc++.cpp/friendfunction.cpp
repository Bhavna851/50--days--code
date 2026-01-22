#include<iostream>
using namespace std;
class complex {
 int a,b;
  public:
    int setdata(int v1,int v2){
        a=v1;
        b=v2;

    }//below lines will provide us the access that we can use the private data member of the class 
    friend complex sumcomplex(complex c1, complex c2);//in friend function passing object as function argument 
    int printnumbers(){
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;

    }
};
complex sumcomplex(complex c1,complex c2)//it is not a part of a class
{
    complex c3;
    c3.setdata((c1.a+c2.a),(c1.b+c2.b));//accessing data present in setdata function with the help of newly
    //created object that is c3 without the help of object we cannot access the data member declared in 
    //private section of the class.
    return c3;
}
int main(){
    complex c1,c2,c3;
    c1.setdata(1,4);
    c1.printnumbers();
    //c1.sumcomplex(c1,c2) invalid will give an error 
    c2.setdata(3,2);
    c2.printnumbers();
     c3= sumcomplex(c1,c2);
     c3.printnumbers();
    return 0;
}
//properties of friend function 
/*
1. friend function is not the part of class .
2.it is not a member function of the class and therefore it can be invoked like a normal function.
3.syntax:
  friend classname functionname (passing object as argument)
4. we cannot call the friend function using the object of the class 
    c1.sumcomplex(c1,c2)== invalid
5. friend function can access the private data member of the class 
6. it can be declared in public and private section of the class.
7. it cannot directly access data member declared in private section it needs object_name.datamember_name
 to access any member. */
