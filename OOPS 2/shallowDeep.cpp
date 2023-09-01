#include<iostream>
#include<string.h>
using namespace std;
class student{
    int age;
    // char name[100]; // bad choice bcz we know DMA

    char *name;
    
    public:
    student(int age,char *name){
        this->age = age;
        // this->name = name; // shallow copy

        this->name= new char[strlen(this->name)+1]; 
        strcpy(this->name,name);
    }   
    void display(){
        cout<<age<<" "<<name<<endl;
    }
};

