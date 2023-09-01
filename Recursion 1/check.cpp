#include<iostream>
using namespace std;
bool check(int a[],int size,int key){
    if(size==0){
        return false;
    }
    if (a[0]==key){
        return true;
    }
    return check(a+1,size-1,key);
}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int key;
cin>>key;
cout<<check(a,n,key);
return 0;
}