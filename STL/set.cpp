#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>st;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    st.insert(x);     // cannot do st[1],st[2]  but st.end()...pointers are available

        
}

//st.erase(start iterator,end iterator)
//st.erase(st.begin,st.begin+2);
for(auto it:st){
    cout<<it<<" ";
}
auto it=st.find(2);
cout<<*it;

multiset<int>ms;
int m;
cin>>m;
for (int i = 0; i < m; i++)
{
    int x;
    cin>>x;
    ms.insert(x);
}
for(auto it:ms){
     cout<<it<<" ";
}



return 0;
}