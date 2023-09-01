#include<iostream>
using namespace std;
void mergesort(int arr[],int size,int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid=si+ei/2;
    mergesort(arr,size,si,mid);
    mergesort(arr,size,mid+1,ei);
    

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
return 0;
}