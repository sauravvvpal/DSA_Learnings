#include<iostream>
using namespace std;
void increment(int **p){
    p=p+1;
}
void increment2(int**p){
    **p++;
}
void increment3(int **p){
    *p++;
}
int main(){
int a=10;
int *p=&a;
int **q= &p;
cout<<a<<endl;
cout<<p<<endl;
cout<<q<<endl;
increment(q);
cout<<endl;
cout<<a<<endl;
cout<<p<<endl;
cout<<q<<endl;
increment2(q);
cout<<endl;
cout<<a<<endl;
cout<<p<<endl;
cout<<q<<endl;






return 0;
}