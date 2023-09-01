#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,5>arr={1,4,5};
    // for(int i=0;i<5;i++){
    //     cout<<arr.at(i)<<" ";
    // }


    // arr.fill(5);
    // for(int i=0;i<5;i++){
    //     cout<<arr.at(i)<<" ";
    // }

    // arr.fill(17);
    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }

    arr.fill(17);
    // for(auto it=arr.rbegin();it!=arr.rend();it++){
    //      cout<<*it<<" ";
    //  }
    //  cout<<endl;
    //  for(auto it=arr.end()-1;it>=arr.begin();it--){
    //      cout<<*it<<" ";
    //  }

     for(auto it:arr){
        cout<<it<<" ";
     }
     cout<<endl;
// string s="jfjsfkjsfdsk";
// for(auto it:s){
//     cout<<it<<" ";
// }

cout<<arr.size()<<endl;
cout<<arr.front()<<endl;
cout<<arr.back();

return 0;
}