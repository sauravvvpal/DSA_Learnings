#include<iostream>
using namespace std;
int printNumbers(int n){
    int x=printNumbers(n-1);
    n--;
    return x;
    if(n==1){
        return 1;
    }
}
int main(){
int n;
cin>>n;
cout<<printNumbers(n);
return 0;
}