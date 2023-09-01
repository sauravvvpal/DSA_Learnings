#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int currsum=0;
int mxsum= INT_MIN;
for(int i=0;i<n;i++){
currsum+=arr[i];
if(currsum<0){
    currsum=0;
}
mxsum= max(mxsum,currsum);
}
cout<<currsum<<endl;
return 0;
}