#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int top;
int size;

stack(int size){
    this->size=size;
    top=-1;
    arr=new int[size];
}
void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
}
int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

};
int main(){
stack s(5);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(2);
cout<<s.peek()<<endl;
s.pop();
cout<<s.peek()<<endl;
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.push(1);
if(s.isEmpty()){
    cout<<"stack is empty";
}
else{
    cout<<"not empty";
}
return 0;
}