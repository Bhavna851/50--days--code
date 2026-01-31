// hierarchical inheritance
    #include<iostream>
    using namespace std;
    class data{//base class
        protected:
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
    class sum :public data{//derived class
        public:
            int add(){
                cout<<"sum of a and b is "<<a+b<<endl;
            }
        };
    class multi :public data//derived class
    { public:
        void multiply(){
            cout<<"multiplication of a and b is "<<a*b<<endl;
        }
    };
    int main(){
        sum x1;
        multi x2;
        x1.setdata();
        x1.getdata();
        x1.add();
        x2.setdata();
        x2.getdata();
        x2.multiply();
        return 0;

    }