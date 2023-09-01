#include<iostream>
#include "fraction.cpp"
using namespace std;
int main(){
    Fraction f1(13,4);
    Fraction f2(15,6);
    cout<<"Fraction f1 is: ";
    f1.print();
    cout<<endl;
    cout<<"fraction f2 is: ";
    f2.print();
    cout<<endl;
    cout<<"addition of function is: ";

    f1.add(f2);
    f1.print();

return 0;
}