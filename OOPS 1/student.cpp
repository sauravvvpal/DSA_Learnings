#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    private:
    int age;

    public :
    void print(){
        cout<<age<<" "<<rollno<<endl;
        }

        int getage(){
            return age;
        }
        void setage(int a){
            age=a;
            
        }
        void display(int a,int r){
            int age=a;
            int rollno=r;
        }
};