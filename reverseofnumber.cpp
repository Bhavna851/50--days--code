#include<iostream>
#include<string>
using namespace std;
//reverse of a number
int reverseofnum(int num){
    int ld;
    int reverse;
    while(num>0){
         ld=num%10;
        num=num/10;
         cout<<ld;
    }
}
int main(){
    int num;cin>>num;
    reverseofnum(num);
    
    return 0;
}
output:
56789
98765
