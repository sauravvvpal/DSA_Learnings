#include<iostream>
#include"constructor.cpp"
using namespace std;
int main(){
saurav s1(89,65);
cout<<"address of s1: "<<&s1;
s1.print();
return 0;
}