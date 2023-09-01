#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>st;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
for(int i=0;i<n;i++){
    cout<<st.top()<<" ";
    st.pop();
}

// delete the enture stack
// while(!st.empty()){
//     st.pop();
// }

cout<<st.size();
return 0;
}