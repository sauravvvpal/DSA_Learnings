#include<iostream>
#include "shallowDeep.cpp"
using namespace std;
int main(){
char name[4]="abc";
student s1(12,name);
s1.display();

name[0]= 'e'; //alag se array banegi jaha e save hoga 0th position pe
student s2(14,name);
s2.display();
s1.display(); // here changes reflect nahi hue means deep copy hui hai

return 0;
}