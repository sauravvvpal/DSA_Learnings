#include<iostream>
#include "student.cpp"
using namespace std;
int main(){
    student s1;
    student s2;
    s1.rollno=23;
    s2.rollno=24;
    s1.print();
    s2.print();
    s1.setage(14);
    s2.setage(17);
    s1.print();
    s2.print();

    student *s3=new student;
    (*s3).rollno= 45;
    s3->setage(97);
    student *s4= new student;
    s4->rollno=98;
    s4->setage(100);
    s3->print();
    s4->print();
    
    student s5;
    s5.display(14,12);
    student *s6= new student;
    s6->display(76,45);
    s5.print();
    s6->print();

    return 0;
}