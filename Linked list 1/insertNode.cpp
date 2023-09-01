#include<iostream>
#include "node.cpp"
using namespace std;

node *takeinput_better(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1){
        node *newnode= new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
               tail->next=newnode;
               tail=tail->next;
        }
        cin>>data;
        return head;
    }
}

void insertnode(node *head,int i,int data){
    node *newnode= new node(data);
    int count=0;
    node *temp= head;
    if(i==0){
        newnode->next=head;   // to store the adress of previous first
        head=newnode;         // bcoz newnode is now 1st node
    }
    while(temp!=NULL && count<i-1){
        temp= temp->next;
        count++;
    }
    if(temp!=NULL){
    node *a=temp->next;
    temp->next=newnode;
    newnode->next=a;
    }
}

void print(node *head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
int main(){
     node *head= takeinput_better();
     print(head);
     int i,data;
     cin>>i>>data;
     insertnode(head,i,data);
     print(head);
return 0;
}