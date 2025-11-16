#include<iostream>
using namespace std;
int global=34;//global variable
int main(){
    int local=22;//local variable
    cout<<"local variable is: "<<local<<endl;
    cout<<"global variable is: "<<global<<endl;
    return 0;
    
}
output:
local variable is: 22
global variable is: 34
    
