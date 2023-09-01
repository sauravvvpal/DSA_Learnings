#include<iostream>
#include "ComlexNumbers.cpp"
using namespace std;
int main(){
int real1,imaginary1,real2,imaginary2;
cout<<"Enter your complex number: ";
cin>>real1>>imaginary1;

cout<<"Enter your complex number: ";
cin>>real2>>imaginary2;

complexNumbers c1(real1,imaginary1);
complexNumbers c2(real2,imaginary2);

cout<<"Choice?"<<endl;
int choice;
cin>>choice;

if(choice==1){
    cout<<"Addition of complex numbers is: ";
    c1.add(c2);
    c1.print();
    }

    else if(choice==2){
        cout<<"Multiplication of complex numbers is: "; 
        c1.multiply(c2);
        c1.print();
    }

    else{
        cout<<"Wrong Choice! Choice must be 1 or 2 ";
    }
return 0;
}