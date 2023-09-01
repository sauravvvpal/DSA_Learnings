#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// Most imp data structure for competitive programming
// it take sthe ekements in descending order it keeps 
// the maximum element at top and prinnt it

priority_queue<int>pq;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    pq.push(x);
}
for(int i=0;i<n;i++){
    cout<<pq.top()<<" ";
    pq.pop();
}
cout<<endl;
// what if i want m minimum priority queue

priority_queue<int>pqq;
pqq.push(-1);
pqq.push(-5);
pqq.push(-2);
pqq.push(-4);
pqq.push(-7);
for(int i=0;i<5;i++){
cout<<-1*pqq.top()<<" ";
pqq.pop();
}

return 0;
}