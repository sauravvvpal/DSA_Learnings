#include<iostream>
#include<math.h>
using namespace std;
int xkipower(int x,int n){
    if(n==0){
        return 1;
    }
    return x*pow(x,n-1);
}
int main(){
int x,n;
cin>>x>>n;
cout<<x<<n<<endl;
cout<<xkipower(x,n);
return 0;
}