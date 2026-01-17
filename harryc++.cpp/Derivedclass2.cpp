#include<iostream>
using namespace std;
class base1{
    private:
     int base1int;
      public:
         void setbase1(int a){
            base1int=a;
         }
         int getbase1(){
          return base1int;
         }

};
class base2{
    private:
    int base2int;
     public:
       void setbase2(int b){
        base2int=b;
       }
       int getbase2(){
        return base2int;
       }
};
class derived :public base1,public base2{
    public:
     void show(){
        cout<<"the value of base1int is "<<getbase1()<<endl;
        cout<<"the value of base2int is "<<getbase2()<<endl;
        cout<<"the sum of base1int and base2int is "<<getbase1()+getbase2()<<endl;     }
};
int main(){
derived h;
h.setbase1(15);
h.setbase2(5);
h.show();
return 0;
}