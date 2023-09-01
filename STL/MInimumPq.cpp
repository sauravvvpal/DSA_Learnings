#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(8);
pq.push(1);
pq.push(4);
pq.push(2);
pq.push(7);
pq.push(7);
for(int i=0;i<6;i++){
    cout<<pq.top()<<" ";
    pq.pop();
}
return 0;
}