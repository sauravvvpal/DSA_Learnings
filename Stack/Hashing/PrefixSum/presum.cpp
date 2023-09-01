#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int N=1e5+7;
int pref[N];
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
     pref[i]=pref[i-1]+arr[i];
}

int t;
cin>>t;
while(t--){
    int l,r;
    cin>>l>>r;
    cout<<pref[r]-pref[l-1]<<endl;
}

return 0;
}