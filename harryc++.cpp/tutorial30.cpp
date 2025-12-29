//types of constructor
//1.default constructor- these type of constructors accept no parameter 
//2.parameterized constructor- these type of constructor accept parameter 
//3.copy constructor
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public: 
       complex(void)//default constructor
       {a=3;
        b=5;
       }
       void printnumbers(){
        cout<<"complex number "<<a<<" + "<<b<<"i"<<endl;

       }

};
int main(){
    complex c1;
    c1.printnumbers();
    return 0;
}/*
/*#include<iostream>
using namespace std;
class complex{
    int a,b;
      public:
       complex(int x,int y){//parameterized constructor
        a=x;
        b=y;
       }
       int printnumbers(){
        cout<<"complex number "<<a<<" + "<<b<<"i"<<endl;

       }
};
int main(){
   //implicit call
    complex c1(6,8);
    c1.printnumbers();
    //explicit call
    complex c2=complex(3,9);
    c2.printnumbers();
    return 0;
}*/
