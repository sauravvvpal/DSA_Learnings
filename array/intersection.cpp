#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#include<math.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr1[n];
int arr2[m];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
for(int i=0;i<m;i++){
    cin>>arr2[i];
}
int arr[min(n,m)];
int c=0;
for(int i=0;i<n;i++){
    int cnt=1;
    for(int j=0;j<m;j++){
        if(cnt==1){
            arr1[i]==arr2[j];
            arr[c++]=arr1[i];
            cnt++;
        }
    }
}
for(int i=0;i<c;i++){
     cout<<arr[i]<<" ";
}
return 0;
}