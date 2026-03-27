#include<iostream>
using namespace std;
int sum(int a ,int b){
  return a+b;
}
int square(int n){
    return n*n;
}

int main(){
    int num1,num2;
    int n;
    cout<<"enter two numbers:";cin>>num1>>num2;
    cout<<"sum of two number is: "<<sum(num1,num2)<<endl;
    cin>>n;
    cout<<"Square of number "<<n<<" is "<<square(n);  

    return 0;

}
