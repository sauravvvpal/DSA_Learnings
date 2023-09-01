#include<iostream>
#include"constructor.cpp"
using namespace std;
int main(){
    student s1;
    s1.rollno=32;
    s1.display();
    student s2;
    s2.rollno=5;
    s2.display();

     student1 s3(12,14);
    s3.display();
    student1 s4(15,16);
    s4.display();

return 0;
}