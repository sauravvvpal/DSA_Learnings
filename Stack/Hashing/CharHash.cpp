#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;

//precompute
int hash[26]={0};
for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
}

int t;
cin>>t;
while(t--){
    char c;
    cin>>c;
    cout<<hash[c-'a']<<endl;
}
return 0;
}