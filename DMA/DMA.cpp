#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int *pa2= new int[n];
for(int i=0;i<n;i++){
    cin>>pa2[i];
}
int max=-1;
for(int i=0;i<n;i++){
    if(pa2[i]>max){
        max=pa2[i];
    }
}
for(int i=0;i<n;i++){
    cout<<pa2[i]<<" ";
}
cout<<endl;
cout<<max<<endl;
delete []pa2;
delete pa2;

return 0;
}