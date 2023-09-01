#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
// vector<int>arr;
// cout<<arr.size()<<endl;
// arr.push_back(2);
// arr.push_back(3);
// arr.push_back(4);
// cout<<arr.size()<<endl;
// arr.pop_back();
// cout<<arr.size()<<endl;
// arr.clear();
// cout<<arr.size()<<endl;


vector<int>vec(4,1);
cout<<vec.size()<<endl;
for(auto c:vec){
    cout<<c<<" ";
}
cout<<endl;
vector<int>vec1(vec);
for(auto it:vec1){
    cout<<it<<" ";
}
cout<<endl;

vector<int>s;
s.push_back(3);
s.push_back(4);
s.push_back(5);
s.push_back(6);
s.push_back(7);
vector<int>s1(s.begin(),s.begin()+3);
for(auto it:s1){
    cout<<it<<" ";
}

// to define 2d vectors

vector<vector<int>>vec;
vector<int>s1;
s1.push_back(3);
s1.push_back(5);
s1.push_back(4);
s1.push_back(2);

vector<int>s2;
s2.push_back(3);
s2.push_back(8);
s2.push_back(35);
s2.push_back(2);
s2.push_back(1);

// for(auto vctr:vec){
//     for(auto it:vctr){
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

    //    for(auto it:vec){
    //     for(auto j:it){
    //         cout<<j<<" ";
    //     }
    //    }

    // 10*20 vector
     vector<vector<int>>vec(10,vector<int>(20,0));

     // array of vectors
    //  vector<int>arr(4);
    //  arr[0].push_back(7);

     



return 0;
}