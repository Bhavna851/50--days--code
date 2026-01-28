//multiple inheritance
    #include<iostream>
    using namespace std;
    class data1//base class
    {
        protected:
        int a;
        public:
            int setdata1(){
                cout<<"enter value of a "<<endl;
                cin>>a;

            }
            int getdata1(){
                cout<<"the value of a is "<<a<<endl;
            }
    };
    class data2//base class
    {
        protected:
            int b;
            public:
            int setdata2(){
                cout<<"enter value of b "<<endl;
                cin>>b;

            }
            int getdata2(){
                cout<<"the value of b is "<<b<<endl;
            }
    };
    class sum : public data1,public data2//derived class
    {
        public:
        int add(){
            cout<<"sum of a and b "<<a+b<<endl;
        }
    };
    int main(){
    sum x1;
    x1.setdata1();
    x1.setdata2();
    x1.getdata1();
    x1.getdata2();
    x1.add();
    return 0;
    }