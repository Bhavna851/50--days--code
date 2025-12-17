#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch=65;
        for(int j=n;j>=i;j--){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
output:
5
A B C D E 
A B C D 
A B C 
A B 
A
