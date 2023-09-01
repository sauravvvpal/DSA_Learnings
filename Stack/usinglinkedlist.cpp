#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    node* head=NULL;
    public:
    void push(int data){
        node* newnode;
        newnode->data=data;
        newnode->next=head;
        head=newnode;
         }

         void pop(){
            if(head==NULL){
                cout<<"Stack Underflow";
            }
            else{
                head=head->next;
            }
         }
         void display(){
            node *top=head;
            if(top==NULL){
                cout<<"Stack is empty";
            }
            else{
                while(top!=NULL){
                    cout<<top->data<<" ";
                    top=top->next;
                }
            }
            cout<<endl;
         }
};
int main(){
node s;
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.display();
s.pop();
s.display();
s.pop();
s.display();
s.pop();
return 0;
}