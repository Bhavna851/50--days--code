/*q1. print even numbers from 2 to n
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;

}*/
//q2 PRINT THE MULTIPLICATION TABLE OF N
/*#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int tab;
    for(int i=1;i<=10;i++){
    tab=i*n;
    
    cout<<tab<<endl;
    }
    return 0;
}*/

//q3. find the sum of numbers from 1 to n
/*#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}*/
//q4. print a square of stars
/*#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
        cout<<"*"<<" ";
    }cout<<endl;
}
return 0;  
}*/
//q5. print increasing pattern of stars
/*#include<iostream>
using namespace std;
int main(){
 int n;cin>>n;
 for(int i= 1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
 }*/
//q6.wap to count the number of words in the given string
/*#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string str;//for taking the input of a string we use getline function
    getline(cin,str); //syntax: getline(cin,string_name);
    int count=0;
   for(int i=str.size()-1;i<str.size();i--){
     if(str[i] == ' '){
        
     count++;}

    }
     cout<<count;
     return 0;
   }*/
//q7. wap to reverse th given string
/*#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=str.size()-1;i<str.size();i--){
      cout<<str[i];
    }
    return 0;
}*/
//q8. write a program to check if a string is palindrome or not
/*#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string str1;
    int i;

    for( i=str.size()-1;i<str.size();i--){
    str1.push_back(str[i]);
    }
cout<<str1<<endl;
     if(str==str1){
        cout<<"the given string is palindrome";
     }
     else{
        cout<<"the given string is not a palindrome string";
     }
     return 0;
}*/
//q9. wap to remove all the vowels from the string 
  /*  #include<iostream>
    using namespace std;
    int main(){
        string str,str1;
        getline(cin,str);
        char vowel[5]={'a','e','i','o','u'};
        for(int i=0;i<str.size();i++){
            for(int j=0;j<5;j++){
                if(str[i]!=vowel[j]){
                    continue;
                }
            str1.push_back(str[i]);
            } 
          }  cout<<str1<<endl;
       
    return 0;
    }*/
/*#include<iostream>
using namespace std;
int main(){
    string str;getline(cin,str);
    string str1;
     char vowel[5]={'a','e','i','o','u'};
     for(int i=0;i<str.size();i++){
       bool isvowel= false;
        for(int j=0;j<5;j++){
          if(str[i]== vowel[j]){
            isvowel=true;
             break;
          }
        }
        if(isvowel==false){
        str1.push_back(str[i]);
     }
    }
cout<<str1<<endl;
        
return 0;
}*/
/*#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
     int setdata(int v1,int v2){
        a=v1;
        b=v2;
     }friend complex sumcomplex(complex c1,complex c2);
     int printnumber(){
        cout<<"complex number "<< a<<" + "<<b<<"i"<<endl;

     }

};
complex sumcomplex(complex c1,complex c2){
    complex c3;
    c3.setdata((c1.a+c2.a),(c1.b+c2.b));
    return c3;
}
int main(){
    complex c1,c2,c3;
    c1.setdata(1,4);
    c1.printnumber();
    c2.setdata(3,2);
    c2.printnumber();
     c3=sumcomplex(c1,c2);
     c3.printnumber();
     return 0;
}*/

     