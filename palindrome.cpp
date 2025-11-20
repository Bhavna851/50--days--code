#include<iostream>
#include<string>
using namespace std;
int checkpalindrome(string s){
    string s1;
    int size=s.size();
    cout<<size<<endl;
for(int i=size-1;i>=0;i--){
     s1.push_back(s[i]);
     
}cout<<s1<<endl;
  if(s==s1){
        cout<<"palindrome"<<endl;
     }
     else{
        cout<<"Not plaindrome"<<endl;
     }
}
int main(){
    string s;
    getline(cin,s);
    checkpalindrome(s);
    return 0;
}
output:
racecar
7
racecar
palindrome
