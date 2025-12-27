#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 map<int,int>mpp;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
sort(v.begin(), v.end());
for(int i=0; i<n; i++){
    mpp[v[i]]++;
}
int a=v[n-1];
vector<int>v1;
for(int i=0; i<n; i++){
if(a%v[i]==0){
    continue;
}
else{
    v1.push_back(v[i]);
}
}
if(v1.size()==0){
    cout<<a<<" "<<1;
    return 0;
}
else{
cout<<a<<" "<<v1[v1.size()-1];
}
}

