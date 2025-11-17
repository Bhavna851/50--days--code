#include<bits/stdc++.h>
using namespace std;
//calculating sum of digit using while loop
int digitsum(int n){
    int sum=0;
while(n>0){
    int last_digit=n%10;
    sum+=last_digit;
    n=n/10;

}
return sum;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
   n=abs(n);//these line will convert negative number to positive number 
   if(n==0){
    cout<<"number is equals to 0 therefore digit sum cannot be calculated"<<endl;
   }
    int sumofdigit=digitsum(n);
    cout<<sumofdigit<<endl;
    return 0;
}
