void print(node *head){
       node *temp=head;
       while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
       }
    }