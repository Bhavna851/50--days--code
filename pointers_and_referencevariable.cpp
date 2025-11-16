#include<iostream>
using namespace std;
//pointers in c++ : it is a datatype which stores the address of other datatype
/*int main(){
    int a=12;
    int *b= &a;
    cout<<"value of a is: "<<*b<<endl;
    cout<<"address of a is: "<<b<<endl;
    return 0;
}*/
//reference variable:
//These concept is commonly used when we want to use a single variable in different references.
int main(){
    int x=45;
    int &y=x;
    cout<<"value of x: "<<x<<endl;
    cout<<"value of y: "<<y<<endl;
    return 0;
}
