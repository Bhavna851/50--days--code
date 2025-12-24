#include<iostream>
using namespace std;
/*int main(){
        int arr[4]={12,34,56,99};
        int target=88;
        for(int i=0;i<4;i++)
         {
            if(target==arr[i]){
                cout<<arr[i]<<" found at "<<i<<" index"<<endl;

            }
        }
            
                cout<<" element not present in array ";
        
    
    

    return -1;
}*/
int main(){
    int n=4;
    int arr[4]={1,2,3,4,};
    float mean;
    float sum=0;//it willalways give an integer value but the ans that is int/int will always be int 
    for(int i=0;i<4;i++)
    { sum+=arr[i];
    }
    mean=sum/n;
    cout<<"mean : "<<mean<<endl;
    float variance;
    for(int i=0;i<4;i++){
        variance+=(arr[i]-mean)*(arr[i]-mean);//summation(x- x bar)^2/n

    }
    variance= variance/n;
    cout<<"variance : "<<variance<<endl;
    return 0;
}