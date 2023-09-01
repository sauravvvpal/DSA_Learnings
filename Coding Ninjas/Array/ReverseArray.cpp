#include<iostream>
#include<cmath>
using namespace std;
void print(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
       swap(arr[i],arr[j]);
       i++;
       j--;
    }
}
void printarr(int arr[],int n){
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
print(arr,n);
printarr(arr,n);
return 0;
}