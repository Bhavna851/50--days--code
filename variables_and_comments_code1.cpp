#include<iostream>
using namespace std;
int main(){
    int v=2;//variable
    cout<<"value of variable is: "<<v<<endl;
    v=4;
    cout<<"now value of variable is: "<<v<<endl;
    const int c=7;//constant
    cout<<"value of constant is: "<<c<<endl;
    //c=5; these line will give an error because the value of constant can never be changed 
    return 0;

}
