#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);  // sorting of array
for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;
reverse(arr,arr+n);   // reverse of an array
for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;
int el= *max_element(arr,arr+n); // max element
int el1=*min_element(arr,arr+n); // min element
cout<<el<<" "<<el1;
cout<<endl;
int el2=count(arr,arr+n,4);  // count of occurence of number
cout<<el2<<endl;
int sum=accumulate(arr,arr+n,0); // sum function
cout<<sum<<endl;

bool res=binary_search(arr,arr+n,3);
cout<<res;



return 0;
}