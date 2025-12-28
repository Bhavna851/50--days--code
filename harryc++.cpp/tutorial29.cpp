/*#include<iostream>
using namespace std;
//forward declaration
class y;
class x
{
    int a;
    public:
    friend int sum(x c1,y c2);

    int setdata(int v1){
        a=v1;
    }
    int display(){
        cout<<"value of a: "<<a<<endl;

    }
};
class y{
    int b;
    public:
    friend int sum(x c1,y c2);
    int setdata1(int v2){
        b=v2;
    }
    int display1(){
        cout<<"value of b: "<<b<<endl;
    }
};
int sum(x c1,y c2){
    cout<<"sum of a and b: "<<(c1.a+c2.b)<<endl;

}
int main(){
    x c1;
    c1.setdata(3);
    c1.display();
    y c2;
    c2.setdata1(6);
    c2.display1();
    sum(c1,c2);
    return 0;
}*/
#include<iostream>
using namespace std;
//forward declaration
class B;
class A
{
    int a;
    public:
    void setdata(int val1){
        a=val1;
    }friend int swap(A &x,B &y);
    void print(){
        cout<<"value of a "<<a<<endl;
        }
};
class B{
    int b;
    public:
    
        void setdata1(int val2){
            b=val2;
                }
     friend int swap(A &x,B &y);
    void print(){
        cout<<"value of b "<<b<<endl;

    }
};
int swap(A &x,B &y){
    int temp= x.a;
     x.a=y.b;
     y.b=temp;}
int main(){
    A x;
    x.setdata(3);
    x.print();
    B y;
    y.setdata1(5);
    y.print();
    swap(x,y);
    cout<<"after swapping the values a and b will exchange "<<endl;
    x.print();
    y.print();
    return 0;

}
