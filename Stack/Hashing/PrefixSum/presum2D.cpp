#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int N=1e3+5;
int pf[N][N];
int n;
cin>>n;
int arr[n][n];
for (int i = 1; i <=n; i++)
{
    for(int j=1;j<=n;j++){
        cin>>arr[i][j];
        pf[i][j]=pf[i][j]+pf[i-1][j]+pf[i][j-1]+pf[i-1][j-1];
    }
}

int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
}

return 0;
}