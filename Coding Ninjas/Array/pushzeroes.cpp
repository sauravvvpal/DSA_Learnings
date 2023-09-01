#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[]={2,0,0,1,3,0,0};
int size= sizeof(arr)/sizeof(arr[0]);
int count=0;
for(int i=0;i<size;i++){
     if(arr[i]!=0){
       arr[count++]=arr[i];
     }
}
     for(int i=count;i<=size;i++){
       arr[i]=0;
     }
     for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
     }

return 0;
}