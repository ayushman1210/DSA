#include <bits/stdc++.h>
using namespace std;

void toh(int n, char s, char h, char d){
    if(n==0){return ;}
    toh(n-1,s,d,h);
    cout<<s<<" "<<d<<endl;
    toh(n-1, h,s,d);
}


void arr(vector<int> &v, int n, int idx){
    if(idx==n){return; }
    cout<<v[idx]<<endl;
    arr(v,n,idx+1);
}

void max(vector<int> &v, int idx, int maxi){
    int n=v.size();
    if(idx==n){cout<<maxi; return ;}
    if(maxi<v[idx]){maxi=v[idx];}
    max(v,idx+1,maxi);
}

int main(){
int n;
 cin>>n;
//  toh(n,'a','b','c');
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
// arr(v,n,0);
max(v,0,INT_MIN);
}