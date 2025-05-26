#include<bits/stdc++.h>
using namespace std;
vector<int> duplicate(vector<int>&v){
int n=v.size();
int j=0;
for(int i=1; i<n; i++){
if(v[i]!=v[j]){v[j+1]=v[i]; j++;}
}
v.resize(j+1);
return v;
}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
v=duplicate(v);
for(int i=0; i<v.size(); i++){
    cout<<v[i];
}
}