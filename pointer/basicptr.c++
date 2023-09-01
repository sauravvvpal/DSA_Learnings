#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a=10;
int* aptr=&a;
a++;
cout<<a<<endl;
cout<<*aptr<<endl;
return 0;
}