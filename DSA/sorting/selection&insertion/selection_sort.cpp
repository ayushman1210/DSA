#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
cin>>v[i];
}
for(int i=0; i<t-1; i++){
      int mini=INT_MAX;
      int midx=i;
    for(int j=i; j<t; j++){
    if(v[j]<mini){mini=v[j]; midx=j;}
    }
    swap(v[i], v[midx]);
}
for(int i=0; i<t; i++){cout<<v[i];}
}