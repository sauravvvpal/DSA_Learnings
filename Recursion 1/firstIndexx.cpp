#include<iostream>
using namespace std;
int check(int a[],int size,int key){
    if(size==0){
        return -1;
    }
     if(a[0]==key)
        return 0;

        int ans=check(a+1,size-1,key);
    if(ans==-1){
        return ans;
    }
    else
   return ans+1;
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