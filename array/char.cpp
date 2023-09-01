#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter your word ";
char arr[n+1];
cin>>arr;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        break;
    }
    else{
        cout<<"word is palindrome ";
    }
}

return 0;
}