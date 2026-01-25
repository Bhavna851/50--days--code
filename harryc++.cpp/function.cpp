#include<iostream>
#include<string>
using namespace std;
/*void print(){
    cout<<"hello"<<endl;
    
}
int sum(int a,int b){
    int result=a+b;
    return result;
}
int main()
{ print();
 int x=2,y=3;
cout<<sum(x,y)<<endl;
return 0;
}*/
/*int digitsum(int n)
{ int sum=0;
 while(n>0){
    int lastdigit=n%10;
    sum+=lastdigit;
    n=n/10;}
return sum;
 
}
int main()
{ cout<<"digit sum "<<digitsum(234)<<endl;
return 0;
}*/
/*int increment(int &n1,int n2)//pass by reference,pass by value
{n1++;
n2++;
cout<<n1<<" "<<n2<<endl;
}
/*int main()
{ int a=3,b=5;
    
cout<<a<<" "<<b<<endl;
cout<<a<<" "<<b<<endl;
increment(a,b);
return 0;
}*/
/*int swap(int &a,int &b)
{ int temp=a;//  temp   a   b
a=b;//             3    3   4
b=temp;//           3    4   4
             //     3     4   3
}
int main()
{ int a=3,b=4;
cout<<" number before swapping "<<a<<" "<<b<<endl;
swap(a,b);
cout<<" number after swapping "<<a<<" "<<b<<endl;
return 0;
}//inbuilt function min(a,b),max(a,b),swap(a,b),pushback() */ 
//passing array in function 
//calling methods
//call by value
//call by reference using pointer
//call by reference using reference variable 
int sum(int a,int b)//call by value
{ int sum=a+b;
return sum ;
}
int subtract(int *a,int *b)//call by reference using pointer
{
    int subtract=*a-*b;
    
}
int multi(int &a,int &b)//call by reference using refeence variable 
{
    int multi=a*b;
    return multi;
}
int main(){
int a=3,b=5;
cout<<"sum of a and b is : "<<sum(3,5)<<endl;

cout<<"subtraction of a and b is: "<<subtract(&a,&b)<<endl;
cout<<"multiplication of a and b is: "<<multi(a,b)<<endl;

return 0;
}