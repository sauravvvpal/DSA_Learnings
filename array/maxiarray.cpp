#include<iostream>
#include<cmath>
using namespace std;
int main(){
int mxx= -19999999;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    mxx= max(mxx,a[i]);
    cout<<mxx<<endl;
}

return 0;
}