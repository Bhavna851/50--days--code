#include<iostream>
using namespace std;
int main(){
    int a=12;
    int *p=&a;
    cout<<"value of a "<<*p<<endl;
    cout<<"address of a "<<&a<<endl;
    //new operator
    int *b= new int(50);
    float *c= new float(67.98);
    cout<<*b<<endl;
    cout<<*c<<endl;
    int *arr = new int(4);
     /*arr[0]=4;
      arr[1]=8;
      arr[2]=6;
      arr[3]=5;*/
      for(int i=0;i<4;i++){
        cin>>arr[i];
      }
  
      cout<<"value at arr[0]: " <<*arr<<endl;
      cout<<"value at arr[1]: " <<*(arr+1)<<endl;
      cout<<"value at arr[2]: " <<*(arr+2)<<endl;
      cout<<"value at arr[3]: " <<*(arr+3)<<endl;
      
      
    return 0;

}
