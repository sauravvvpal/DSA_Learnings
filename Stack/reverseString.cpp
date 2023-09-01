#include<iostream>
using namespace std;
class stack{
public:
char *arr;
int top;
int size;

stack(int size){
    this->size=size;
    top=-1;
    arr=new char[size];
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
char peek(){
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
string s="ABCDE";
stack st(10);
for(int i=0;i<s.length()-1;i++){
    char ch= s[i];
    st.push(ch);
}
string ans="";
while(!st.isEmpty()){
    cout<<st.peek()<<" ";
    st.pop();

}

return 0;
}