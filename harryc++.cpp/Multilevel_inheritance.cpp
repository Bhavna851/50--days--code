//multilevel inheritance
   #include<iostream>
    #include<string.h>
    using namespace std;
    class studentinfo
    {
        protected:
        int rollno;
        string name;
            public:
                void setdata(){
                    cout<<"enter roll no and name  "<<endl;
                    cin>>rollno>>name;

                }
                
    };
    class marks: public studentinfo{
        protected:
        int sub1,sub2;
        public:
                void setdata1(){
                cout<<"enter marks "<<endl;
                cin>>sub1>>sub2;
                }
                void getdata(){
                    cout<<"roll no of student is "<<rollno<<endl<<"name of student is  "<<name<<endl;
                    cout<<"marks in sub1 is "<<sub1<<endl<<"marks in sub2 is  "<<sub2<<endl;
                }
    };
    class total: public marks
    {
        public:
        void show(){
            cout<<"total marks in both the subject is "<<sub1+sub2<<endl;
        }
    };
    int main(){
        total aa;
        aa.setdata();
        aa.setdata1();
        aa.getdata();
        aa.show();
        return 0;
    }