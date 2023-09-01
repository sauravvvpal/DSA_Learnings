#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
queue<int>q;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    q.push(x);
}
for(int i=0;i<n;i++){
    cout<<q.front()<<" ";
    q.pop();
}
cout<<endl;

// delete the enture stack
// while(!q.empty()){
//     q.pop();
// }

cout<<q.size();
return 0;
}