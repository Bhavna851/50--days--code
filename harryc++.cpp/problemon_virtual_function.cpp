#include<iostream>
#include<cstring>
using namespace std;
class CWH
{   
     public: 
     string title;
    float rating;
    CWH(string s,float r){
            title=s;
            rating =r;
         }
        virtual  void display(){
            cout<<"welcome in code with harry channel "<<endl;
         }

        };
class videolectures : public CWH{
  float videolength;
        public:
         videolectures(float vl,string s,float r): CWH(s,r)
        {
            videolength=vl;
        }
        void display(){
            cout<<"title of code with harry video lectures channel: "<<title<<endl;
            cout<<"Rating of video lectures:  "<<rating<<endl;
            cout<<"video length of  lectures: "<<videolength<<endl;
            cout<<"---------------------------------------->>>"<<endl;
        }
    };
class textcontent: public CWH
{
    int words;
         public:
         textcontent(int w,string s,float r): CWH(s,r){
             words=w;
         }
         void display(){
            cout<<"title of code with harry textcontent channel: "<<title<<endl;
            cout<<"Rating of textual content:  "<<rating<<endl;
            cout<<"number of words in content: "<<words<<endl;
        }
};
int main(){
    string title;
    float rating ,videolength;
    int words;
     title= "djvideo";
      rating= 4.99;
      videolength= 4.45;
      
    //videolectures vobj( videolength,title,rating);
    //vobj.display();
    title= "textvideo";
    rating= 5.00;
    words=500;
    //textcontent tobj(words,title,rating);
   // tobj.display();
   
   CWH obj1("hii",3.33);
  videolectures obj2(4.99,"hi",5.00);
   CWH *ptr;
     ptr=&obj2;
     ptr->display();


    return 0;

}  
//RULES 
/*1.virtual function cannot be static 
2. virtual function is the friend of another class
3.  virtual function is accessed through object pointer
4.  virtual function of base class might not be used
5.  virtual function define in the base class ,it is not necessary to define it in derived class also */  