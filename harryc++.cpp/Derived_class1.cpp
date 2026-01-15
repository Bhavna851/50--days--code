#include<iostream>
using namespace std;
class base
{int data1;
     public: 
      int data2;
      void setdata(){
        data1=10;
        data2=20;
     }
     int getData1(){
        return data1;
     }
     int getData2(){
        return data2;
     }
};
class derived: private base{
    int data3;
    public:
     void process(){
        setdata();
        data3= data2* getData1();
     }
     void display(){
        cout<<"value of data1 is "<<getData1()<<endl;
        cout<<"value of data2 is "<<data2<<endl;
        cout<<"value of data3 is "<<data3<<endl;
        
     }
};
int main(){
    derived aa;
    
    aa.process();
    aa.display();
    return 0;

}