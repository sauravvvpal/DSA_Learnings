#include<iostream>
using namespace std;
class stack{
int *arr;
int size;
int top1;
int top2;
public:
stack(int size){
    this->size=size;
    this->top1= -1;
    this->top2= size;
    arr=new int(size);
    }

void push1(int val){
    if(top2-top1>1){
        top1++;
        arr[top1]= val;
         }
         else
         cout<<"stack overflow"<<endl;
}
int pop1(){
    if(top1==-1){
        cout<<"stackUnderflow"<<endl;
    }
    else{
    int ans=arr[top1];
    top1--;
    cout<<ans<<" " ;
    }
}
void push2(int val){
    if(top2-top1>1){
        top2--;
        arr[top2]= val;
         }
         else
         cout<<"stack overflow"<<endl;
}
int pop2(){
    if(top2==size){
        cout<<"stackUnderflow"<<endl;
    }
    else{
    int ans=arr[top2];
    top2++;
    cout<<ans<<" " ;
    }
}

};

int main(){
   stack  st(10);
   st.push1(5);
   st.push1(5);
   st.push1(5);
   st.push1(5);
   st.push1(5);
   st.push2(3);
   st.push2(3);
   st.push2(3);
   st.push2(3);
   st.push2(3);
   
   
   st.pop1();
   st.pop1();
   st.pop2();
   st.pop2();
   st.pop2();
   st.pop1();
   st.pop1();
   st.pop1();
   
   st.pop2();
   st.pop2();




return 0;
}