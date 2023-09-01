#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// int -> 16 bits
// char -> 8 bits
// but bt takes only 1 bit so space token is very less than integer

bitset<6>bt;
cin>>bt;
cout<<bt.all()<<endl;
cout<<bt.any()<<endl;
cout<<bt.count()<<endl;
cout<<bt.flip()<<endl;
cout<<bt.none()<<endl;
cout<<bt.set()<<endl;
cout<<bt.reset()<<endl;
cout<<bt.size()<<endl;
cout<<bt.test(4)<<endl;

return 0;
}