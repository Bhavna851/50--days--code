// ARRAY OF OBJECT

/*#include <iostream>
#include <string.h>
using namespace std;
class kiranaitem
{
  string name;
  int id;
  float price;

public:
  void setData()
  {
    cout << "enter name of item" << endl;
    cin >> name;
    cout << "enter item no: " << endl;
    cin >> id;
    cout << "enter price of item: " << endl;
    cin >> price;
  }
  void getData()
  {
    cout << "name of item is: " << name << endl;
    cout << "item no is: " << id << endl;
    cout << "price of item is: " << price << endl;
    cout << "--------------------------------" << endl;
  }
};
int main()
{

  int n;
  cin >> n;
  kiranaitem b1[n];

  for (int i = 0; i < n; i++)
  {
    b1[i].setData();
  }
  for (int i = 0; i < n; i++)
  {
    b1[i].getData();
  }

  return 0;
}*/
//ARRAY OF OBJECT USING POINTER 
#include<iostream>
#include<string.h>
using namespace std;
class kiranaitem
{  string name;
  int id;
  float price;
    public:
      void setData(){
        cout<<"enter name of item"<<endl;
        cin>>name;
        cout<<"enter item no: "<<endl;
        cin>>id;
        cout<<"enter price of item: "<<endl;
        cin>>price;

      }
      void getData(){
        cout<<"name of item is: "<<name<<endl;
        cout<<"item no is: "<<id<<endl;
        cout<<"price of item is: "<<price<<endl;
      cout<<"--------------------------------"<<endl;
    }
  };
int main(){
  int n;cin>>n;
  //we can design the custom datatype using class 
  int *p=&n;//here p is the pointer which store the address
  cout<<"address of n "<<&p<<endl;
  kiranaitem *ptr=new kiranaitem [n];// array of object using pointer
  kiranaitem *ptrtemp= ptr;
  for(int i=1;i<=n;i++){
   ptr->setData();
   ptr++;
  }
  for(int i=1;i<=n;i++){
    ptrtemp->getData();
   ptrtemp++;
  }
  return 0;

}