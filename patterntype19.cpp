#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        //star
        for(int j=i;j<n;j++){
            cout<<"*";
        }//space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;

    }int insp=2*n-2;
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
        insp-=2;
        cout<<endl;
        
    }
    return 0;
}