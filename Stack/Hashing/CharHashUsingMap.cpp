#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
map<char,int>mp;

for(int i=0;i<s.size();i++){
    mp[s[i]-'a']++;
}

// int t;
// cin>>t;
// while(t--){
//     char c;
//     cin>>c;
//     // fetch
//     cout<<mp[c-'a']<<endl;
// }

for(int i=0;i<s.size();i++){
    cout<<s[i]<<"->"<<mp[s[i]-'a']<<endl;
}
return 0;
}