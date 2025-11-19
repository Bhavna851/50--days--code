#include<iostream>
#include<string>
using namespace std;
//struct
struct employee
{
    int eid;
    string name;
     float salary;
};
//union
union student
{
    int age;
    int rollno;
};
int main(){
    employee e1;
    student m1;
    e1.eid=101;
    e1.name="Ravi";
    e1.salary= 10000;
    cout<<"OUTPUT OF STRUCT"<<endl;
    cout<<"Employee details: "<<endl;
    cout<<"employee id: "<<e1.eid<<endl;
    cout<<"employee name: "<<e1.name<<endl;
    cout<<"employee Salary: "<<e1.salary<<endl;
     cout<<"---------------------------------->"<<endl;
     cout<<"OUTPUT OF UNION"<<endl;
     m1.age=21;
     //m1.rollno=12;
      cout<<"student details: "<<endl;
      cout<<"age: "<<m1.age<<endl;
     // cout<<"Rollno: "<<m1.rollno<<endl; these line will give garbage value because at a time only one
     //cout statement will give the correct output.
     cout<<"---------------------------------->"<<endl;
     cout<<"OUTPUT OF ENUM"<<endl;
     //ENUM
    enum food{Breakfast,Lunch,Dinner};
{
    cout<<Breakfast<<endl;//returns the index value
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;
}return 0;
}
    
