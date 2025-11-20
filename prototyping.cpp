#include<iostream>
using namespace std;
int check(int n);
int fact(int x);//prototyping concept
int main(){
int n;
cin>>n;
n=abs(n);//convert negative number to positive 
check(n);
int x;cin>>x;
cout<<fact(x);
return 0;
}
int check(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

}
int fact(int x){

int fact=x;
for(int i=1;i<x;i++){
    fact*=i;
}return fact;
}
output:
2
even
5
120
//prototyping 
these concept in commonly used in such cases when we want to use a function after the main function.
so generally when we do thse we get an error but using the prototyping concept we wont get an error.
In these concept we declare the function before the main function and after writing the main function we give definition to that 
function .
