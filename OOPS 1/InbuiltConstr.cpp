#include<iostream>
#include "constructor.cpp"
using namespace std;
int main(){
 student1 s1(23,24);
student1 s2(s1);
s1.display();
s2.display();

student1 *s3=new student1(12,25);
student1 s4(*s3);
student1 *s5=new student1(*s3);
student1 *s6= new student1(s1);
(*s3).display();
s4.display();
s5->display();
s6->display();
cout<<endl;
cout<<"copy assingment operator "<<endl;
*s3=s1;
s3->display();



return 0;
}