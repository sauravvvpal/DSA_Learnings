#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    private:
    int age;

    public:

    // default constructor
      student(){
        cout<<"constructor called "<<endl;
      }
      void display(){
        cout<<rollno<<" "<<age<<endl;
      }
};

class student1{
  public:
  int age;
  int rollno;

  void display(){
    cout<<age<<" "<<rollno<<endl;

  }

  student1(int a,int r){
    cout<<"constructor1 is called "<<endl;
    age = a;
    rollno=r;
  }
  ~student1(){
    cout<<"destructor called "<<endl;
  }

};

class saurav{
  public:
  int age;
  int wt;

  saurav(int w,int a){
    cout<<"this: "<<this<<endl;
    this->wt=wt;
    age=a;

  }
  void print(){
    cout<<age<<" "<<wt<<endl;
  }

};