//PURE VIRTUAL FUNCTION
/*it is declared in the abstract class with no definition and the definition to these is given in the
derived class 
syntax: virtual returntype function name =0;*/
#include<iostream>
#include<cstring>
using  namespace std;
class slumarea{//abstract class
    protected:
      string state;
      string place;
       int population;
        string basic_needs;
        public:
             slumarea(string s,string a,int p,string b){
                state=s;
               place=a;
                population=p;
                basic_needs=b;
             }
                 virtual void display()=0;//pure virtual function
                
             

};
class family:public slumarea
{  protected:
    int total_families;
    int average_income;
       public:
        family(int t,int income,string s,string a,int p,string b): slumarea(s,a,p,b){
         total_families=t;
         average_income=income;
        }
        void display(){
          cout<<"DISPLAYING THE DATA OF THE FAMILIES LIVING IN SLUM AREA "<<endl;
         cout<<"state: "<<state<<endl;
                cout<<"place: "<<place<<endl;
                cout<<"population: "<<population<<endl;
                cout<<"basic needs: "<<basic_needs<<endl;
                 cout<<"total_families: "<<total_families<<endl;
                 cout<<"average_income: "<<average_income<<endl;
        }
      };
int main(){
   family slum(100,3000,"Maharashtra","Dharavi",100000,"employment");
    slum.display();
    return 0;
}