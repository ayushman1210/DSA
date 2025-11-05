#include <bits/stdc++.h>
using namespace std;

int check(vector<int>v, int i){
    int n=v.size();
    if(i>=n){return -1;}
    int sum=0;
    int pro=1;
    v[i]*=-1;
    for(int j=0; j<n; j++){
     sum+=v[j];
     pro=pro*v[j];
    }
   if(sum>=0 && pro>=1){return i;}
else{ return check(v,i+1);}
}

int main(){
    int t; cin>>t;
    while(t--){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
sort(v.begin(), v.end());
int sum=0;
int pro=1;
for(int i=0; i<n; i++){
sum+=v[i];
pro=pro*v[i];
}
if(sum>=0 && pro>=1){cout<<0<<endl;}
else{cout<<check(v,0);}
}
}