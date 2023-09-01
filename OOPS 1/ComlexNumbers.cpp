#include<iostream>
using namespace std;

class complexNumbers{
    int real;
    int imaginary;

    public:

    complexNumbers(int r,int i){
            real=r;
            imaginary=i;
    }

    void print(){
        if(imaginary>0)
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        else
        cout<<real<<imaginary<<"i"<<endl;

    }

    void add(complexNumbers c2 ){
           int addReal= real+c2.real;
           int addImaginary = imaginary+c2.imaginary;

           real= addReal;
           imaginary= addImaginary;
    }

    void multiply(complexNumbers c2){
          int multReal= real*c2.real;
          int multImaginary= imaginary*c2.imaginary*(-1);

          real=multReal;
          imaginary= multImaginary;
    }
};