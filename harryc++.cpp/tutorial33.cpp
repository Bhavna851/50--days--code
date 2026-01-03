//dynamic initialization of object using constructor
//dynamic->program run->user input-> then you we will get to know that which constructor is exactly running 
#include<iostream>
using namespace std;
class bankdeposit
{
int principal;
int years;
float interestrate;
float returnvalue;
         public:
           bankdeposit(){}
           bankdeposit(int p,int y,float r){
            principal=p;
            years=y;
            interestrate=r;
            returnvalue=principal;
            for(int i=0;i<y;i++){
                returnvalue=returnvalue *(1+r);
            }
           }
           bankdeposit(int p,int y,int R){
            principal=p;
            years=y;
            interestrate=float(R)/100;
            returnvalue=principal;
            for(int i=0;i<y;i++){
                returnvalue=returnvalue *(1+interestrate);
            }
        }
   void show(){
    cout<<endl<<"principal amount was "<<principal<<" return value after "<<years<<" years is "<<returnvalue<<
    endl;
   }
};
int main(){
    bankdeposit b1,b2,b3;
    int p,y,R;
     float r;
     b3.show();
     cout<<"enter the values of p,y and r "<<endl;
     cin>>p>>y>>r;
    b1=bankdeposit(p,y,r);
      b1.show();
     cout<<"enter the values of p,y and R "<<endl;
     cin>>p>>y>>R;
    b2=bankdeposit(p,y,R);
      b2.show();
      return 0;
    }
      