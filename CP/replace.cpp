#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int mini=INT_MAX;
int maxi=INT_MIN;
int midx=-1;
int madx=-1;
for(int i=0; i<t; i++){
    if(v[i]<mini){mini=v[i]; midx=i;}
    if(v[i]>maxi){maxi=v[i]; madx=i;}
}
   int temp=v[midx];
    v[midx]=v[madx];
    v[madx]=temp;
for(int i=0; i<t; i++){
    cout<<v[i]<<" ";
}
}