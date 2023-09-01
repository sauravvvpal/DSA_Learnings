#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val){
    data =val;
    next= NULL;
    }
};

void insertathead(node *head,int val){
    node *n=new node(val);
    n->next= head;
    head=n;
    return;
}

bool search(node *head,int key){
    node *temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void insertattail(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head= n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node *head){
    node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
}

int main(){
node *head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertathead(head,4);
display(head);
int key;
cin>>key;
cout<<search(head,key);

return 0;
}