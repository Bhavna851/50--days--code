//program to find the frequency of elements in array
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
   int main(){
    int arr[5]={1,1,2,2,3};
     unordered_map<int ,int>freq;
     for(auto x:arr){
          freq[x]++;
         
     }
     for(auto &y:freq){
        cout<<y.first<<" frequeny "<<y.second<<endl;
     }

     for(auto p:freq)
     {
        cout<<p.first<<" frequency is: "<<p.second<<endl;
     }
     return 0;
   }
output:
3 frequency is: 1
2 fresquency is: 2
1 frequency is:  2
