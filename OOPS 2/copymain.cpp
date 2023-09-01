#include<iostream>
#include "copy.cpp"
using namespace std;
int main(){
    char name[]="abcd";
    student s1(23,name);
    s1.display();
    student s2(s1);
    s2.name[0]='x';
    s1.display(); // s1 me changes reflect nahi hue
    s2.display();
    

return 0;
}