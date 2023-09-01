#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int count=0;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"No of triplet pairs are: "<<count;
}