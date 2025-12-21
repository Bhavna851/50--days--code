#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int insp=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<insp;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        insp-=2;
    }
    int sp=2;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-1;j++){
            cout<<"*";
        }
        for(int j=0;j<sp;j++){
          cout<<" ";
        }
        for(int j=i;j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;
        sp+=2;
    }
    return 0;
}