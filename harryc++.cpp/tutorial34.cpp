//copy constructor is used to initialize new object to the existing object 
//when we need to initialize the variable of an object with the values of variable  of another object same type 
//then we use the concept of copy constructor 
//eg demo a1;
//demo b1=a1;
 // or demo b1(a1);
// in copy constructor same class object is passed as argument with mpercent symbol
//we are &with obj because we dont want to create new object but we just want to take make a reference of
//existing object  
        #include<iostream>
        using namespace std;
        class number
        {
            int a;
            public:
                    number(){//default constructor
                        a=10;
                    }
                    number(int num){//parameterized constructor
                        cout<<"a" ; a=num;
                    }//when no copy constructor is found compiler supplies its own copy constructor 
                    number(number &obj){//copy constructor
                    cout<<"copy constructor called!!!"<<endl;
                    a=obj.a;//initializing the variable of an object with the value of the variable of another 
                        //object of same type 
                                    }
                    void show(){
                        cout<<"the value of a is : "<<a<<endl;
                    }
                };
        int main(){
            number x,y(20),z;
            x.show();
            y.show();
            z.show();
            number w=y;
            w.show();
            number v(z);
            v.show();
            return 0;
        }                  