#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
int i,j,k;
i=0,j=0;k=0;
int arr[m+n];
while(i<n && j<m){
    if(a[i]<b[j]){
        arr[k++]=a[i++];
    }
    else{
        arr[k++]=b[j++];
    }
}
    while(i<n){
        arr[k++]=a[i++];
    }
    while(j<n){
        arr[k++]=b[j++];
    }

for(int i=0;i<m+n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}