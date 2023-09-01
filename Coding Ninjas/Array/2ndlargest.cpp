#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
int a,b,c,n;
for(int i=1;i<5;i++){
cin>>a>>b>>c;
int x,y,z;
if((a>b) && (b>c) || (a>b) && (c>b) && (a>c)){
      cout<<b<<endl;
}
else if((b>c) && (c>a) || (b>c) && (a>c) && (b>a)){
    cout<<c<<endl;
}
else if((c>a) && (a>b) || (c>a) && (b>a) && (c>b)){
    cout<<a<<endl;
    }
return 0;
}