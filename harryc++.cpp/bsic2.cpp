#include<iostream>
using namespace std;//built in function min(a,b)
/*int main()
{
    int arr[6]={1,5,-3,2,6,-5};
    int mini=arr[0];
    for(int i=1;i<6;i++)
    {
        mini=min(mini,arr[i]);

    }cout<<mini;*/
    int main(){
        int arr[4]={12,34,56,99};
        int target=99;
        for(int i=0;i<4;i++)
         {
            if(target==arr[i]){
                cout<<arr[i]<<" found at "<<i<<" index"<<endl;

            }
         else
         {
            return -1;
         }
    }

    return 0;
}