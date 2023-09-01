
/*int arr[10]={10,1,2,5,13,6,7,9,0,12};
sort(arr, arr+10);
for (int i = 0; i < 10; i++)
{
    cout << arr[i] <<" ";
}*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"enter your word ";
char arr[n+1];
cin>>arr;
bool flag=0;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        flag=1;
        break;
    }
}
if (flag==1)
{
    cout<<"not a palindrome ";
    }
    else{
        cout<<"palindrome";
    }


return 0;
}
