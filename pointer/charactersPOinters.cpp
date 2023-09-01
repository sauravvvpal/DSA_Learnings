#include<iostream>
using namespace std;
int main(){
// character array behaves differently becoz cout differently impplimented

char b[]= "abc";
char *c= &b[0];
cout<<&b<<endl;
cout<<c<<endl;
char c1='a';
char *pc=&c1;
cout<<pc<<endl; // different case tab tak print kiya jab tak kahi null nhi mil gya
char str[]="abcde"; // this is right bcoz temp memory banegi
char *ptr="abcdef";  // this is wrong always make your own array
return 0;
}