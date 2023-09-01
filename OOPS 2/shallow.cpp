#include<iostream>
#include "shallowDeep.cpp"
using namespace std;
int main(){
char name[4]= "abc";
student s1(12,name);
s1.display();

name[2]= 'e';
student s2(23,name);
s2.display();
s1.display(); // changes reflected here also due to shallow copy

return 0;
}