/* destructor is used to destroy the object created by constructor and it is having same name as the class name
but the name is precedded by a tiled(~) sign */
/*as we know that when we create the object of the class the constructor is automatically called 
but the destructor is called when object goes out of scope */
//destructor is used to free the memory space occupid by objects
#include<iostream>
using namespace std;
int count=0;
class hello{
    public:
         hello(){
          count++;
          cout<<"the object is created "<<count<<endl;
         }
         ~hello(){
            cout<<"the object is destroyed "<<count<<endl;
            count--;
         }
};
int main(){
    hello a1,a2;
    {
        hello a3,a4;
    }
    return 0;
}