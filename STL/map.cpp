#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
pair<int,int>pr ={1,2};
cout<<pr.first<<" ";
cout<<endl;
pair<pair<int,int>,int>ps={{1,2},4};
cout<<ps.first.second<<" "<<ps.second<<endl;
pair<pair<int,int>,pair<int,int>>prr = {{2,5},{5,2}};
cout<<prr.first.second<<" ";

return 0;
}