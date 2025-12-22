#include<iostream>
using namespace std;
class employee
{int id;
    public:
       int setdata()
    {
        cout<<"enter id";
        cin>>id;

    }
     int getdata(){
        cout<<"the id of employee is: "<<id<<endl;
     }
    };
    int main(){
        employee ravi,rohan,ishan,shruti;
        /*ravi.setdata();
        ravi.getdata();
        ravi.setdata();
        ravi.getdata();
        ravi.setdata();
        ravi.getdata();
        ravi.setdata();
        ravi.getdata(); we need do it multiple time which will be a time consuming */
        employee tcs[4];//array of object
        int id;
         for(int i=0;i<4;i++){
            tcs[i].setdata();
            tcs[i].getdata();
         }
         
        return 0;
    }