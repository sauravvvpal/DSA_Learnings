#include<iostream>

using namespace std;

 /* Initializing list is used to initialize our constant and reference data members
  because unhe at the time of creation hi initialize krna padega wrna they show error */
class student{
    public:
    int age;
    const int rollno;
    int &x;  //isko bhi initializing list ka use krke initialize krna hoga

    student (int r,int a) : rollno(r),age(a),x(this->age) { // this is initializing constant data members
          // normal data members ke liye bhi use lr slte hai like age ke liye kiya
    }

    /* student(): rollno(101){    this is also fine but sabka rollno 101 set hoga
    }     
    
    */


    void display(){
        cout<<age<<" "<<rollno<<" "<<x<<endl;
    }

};