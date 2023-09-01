#include<iostream>
#include "node.cpp"
using namespace std;
int main(){
     node n1(2);
     node *head=&n1;
     cout<<head->data<<endl; // head ke through node 1 ko print krwana
     node n2(3);
     n1.next = &n2;
     cout<<n1.data<<" "<<n2.data<<endl;
return 0;
}