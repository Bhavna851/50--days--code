    //single inheritance
    #include<iostream>
    using namespace std;
    class data//base class
    {   protected:
        int a,b;
        public:
            int setdata(){
                cout<<"enter values "<<endl;
                cin>>a>>b;
            }
            int getdata(){
                cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;

            }
    };
    class sum : public data//derived class
    { public:
        int add(){
            cout<<"sum of a and b is "<<a+b<<endl;
        }

    };
    int main(){
        sum aa;
        aa.setdata();
        aa.getdata();
        aa.add();
        return 0;
    }


