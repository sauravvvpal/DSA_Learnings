#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cout<<"enter your key element: "<<endl;
cin>>k;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[i]+arr[j]==k){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
        
    }
    
            
    
}
cout<<"Key element has no matching pairs ";
        
return 0;
}