#include<iostream>
using namespace std;
int main(){
  int marks;
  cout<<"enter marks of student: "<<endl;
  cin>>marks;
  if(marks>=90){
   cout<<"A"<<endl;

  }
   else if(70<=marks&&marks<90){
      cout<<"B"<<endl;
   }
   else
   {
      if(50<=marks&&marks<70){
         cout<<"C"<<endl;
      }
      else{
         cout<<"D"<<endl;
      }
   }
   return 0;
}
output:
enter marks of student: 
90
A
   
