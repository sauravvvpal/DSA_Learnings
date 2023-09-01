#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
cout<<"Intersection elements are ";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            break;
        }
    }
}
return 0;
}