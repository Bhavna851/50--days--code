#include<iostream>
using namespace std;
int main(){
    //implicit conversion(conversion of smaller datatype to bigger datatype)
    char grade='A';
    int value1=grade;
    cout<<"value is: "<<value1<<endl;//Ascii value of A
    //explicit conversion(conversion of bigger datatype to smaller datatype)
     double d=3.14;
     int value2=(int)d;//conversion by assignment operator
     cout<<"value is: "<<value2<<endl;
     return 0;

}
output:
value is: 65
value is: 3
