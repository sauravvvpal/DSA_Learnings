#include<iostream>
#include<string.h>
using namespace std;

// Innbuilt copy constructor shallow copy krta hai so we have to make our own copy constructor
class student{
    public: 
    int age;
    // char name[100]; // bad choice bcz we know DMA

    char *name;
    
    
    student(int age,char *name){
        this->age = age;
        // this->name = name; // shallow copy

        this->name= new char[strlen(this->name)+1]; 
        strcpy(this->name,name);
    } 


    student(student const & s){
        this->age = s.age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }  

    
    void display(){
        cout<<age<<" "<<name<<endl;
    }
};
