#include<iostream>
#include "node.cpp"
using namespace std;
node* takeinput(){
    int data;
    cin>>data;
    node *head=NULL;
    while(data!=-1){
  node* newnode=new node(data);
  if(head==NULL){
    head-newnode;
  }
  else{
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
  }
  cin>>data;
    }
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
node *head= takeinput();
print(head);
return 0;
}