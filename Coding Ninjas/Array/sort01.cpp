#include<iostream>
#include<cmath>
using namespace std;
int main(){
int arr[]={0,1,0,0,1,1,0,1,1};
int i,j;
while(i<j){
    for(int i=0;i<9;i++){
        for(int j=8;j>=1;j--){
            if(arr[i]==1 && arr[j]==0){
                swap(arr[i],arr[j]);
                cout<<arr[i]<<endl;
            }
            
        }
    }
}

return 0;
}