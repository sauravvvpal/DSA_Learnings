#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[]={1,4,0,0,2,0,6,0,2};
int n=sizeof(arr)/sizeof(arr[0]);
int j=0;
int k=0;
int arr2[n];
for(int i=0;i<n;i++){
    if(arr[i]>0){
        arr2[j]=arr[i];
        j++;
    }
    else if(arr[i]==0){
        arr2[n-k-1]=0;
        k++;
    }
    cout<<arr2[n]<<" "<<endl;
}


return 0;
}