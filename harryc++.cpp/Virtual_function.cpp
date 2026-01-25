//virtual function 
/*although hame pta h ki hum jis bhi class ka pointer create karenge usi class ka member function call
or agr malno base class ka apne pointer create kiya or apne usko point karaya derived class ke object
se leking jab app member function call karte ho to base class ka hi call hota h derived class ka nhi*/
  

/* agar aap chahate ho ki derived class ka member function call ho to hum virtual function ka concept
hum yaha par use karenge is concept me humne jo base class ka pointer create kiya hai usi class ke 
member function ko virtual declare kar denge jisse kya hoga ki jab bhi hum base class se pointer se member
function call karenge to derived class ka member function call honga*/

/*by seeing the program the decision making can be done before the execution of the program but which 
  memory address compiler taking and associating it to which object these overall process we will 
  get to know at the run time(late binding )these is only the run time polymorphism that is also known 
  as dynamic binding */

/*#include<iostream>
using namespace std;
class base
{     
    public:
    int var_base=100;
              virtual void display(){
                cout<<" 1 displaying the value of var_base "<<var_base<<endl;
             } 
    };
class derived:public base
{     public:
    int var_derived=200;
         
             void display(){
                cout<<"2 displaying the value of var_base "<<var_base<<endl;
                cout<<"2 displaying the  value of var_derived "<<var_derived<<endl;
             }
};
int main(){
     base*baseclass_pointer;
    base obj_base;
    derived obj_derived;
    //although the base class pointer can point to the derived class object 
  baseclass_pointer=& obj_derived;
    //member function usi class ka call hota hai jiska apne pointer create kiya hai 
   // baseclass_pointer->var_base=45;
    baseclass_pointer->display();

   /*derived *derivedclass_pointer;
    derivedclass_pointer=& obj_derived;
    
    //derivedclass_pointer->var_derived=999;
    derivedclass_pointer->display();*/
#include<iostream>
using namespace std;
class maths{
    public:
     int a,b;
         maths(){//default constructor
          a=8;
          b=2;
         }
     virtual  void getdata(){ /*now the function of derived class is executed because we declared
                                    it as the vitual function*/
     cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
         }                          
        
 };
class addition:public maths
{     public:
    int sum;
        addition(){
            sum=a+b;
        }
        void getdata(){
            cout<<"value of a is: "<<a<<endl;
            cout<<"value of b is: "<<b<<endl;
            cout<<"addition of a and b is: "<<sum<<endl;
        }
};
int main(){
    maths *maths_pointer;//pointer of base class
    //constructors are automatically invoked as the onject is created
    maths base_obj;
    addition derived_obj;
    maths_pointer= &derived_obj;//base class pointer point to the derived class object
    maths_pointer->getdata();
    return 0;
}
