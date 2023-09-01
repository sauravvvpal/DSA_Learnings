#include<iostream>
using namespace std;
int main(){
int j=10;
const int &k=j;
j++;
cout<<j<<" "<<k;

return 0;
}