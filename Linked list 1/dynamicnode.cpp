#include<iostream>
#include "node.cpp"
using namespace std;
 void print(node *head){
        node *temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

int main(){
node *n3=new node(2);
node *head= n3;
node *n4=new node(3);
node *n5=new node(4);
node *n6=new node(5);
node *n7=new node(6);
n3->next=n4;
n4->next=n5;
n5->next=n6;
n6->next=n7;
n7->next=NULL;
print(head);

return 0;
}