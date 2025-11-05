#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&v, vector<int>&p, vector<int>&ans){
int n=v.size();
int m=p.size();
int i=0;int j=0; int k=0;
while(i<n && j<m){
    if(v[i]<=p[j]){
      ans[k++]=v[i++];
    }
    else{
      ans[k++]=p[j++];
    }
    if(i==n){
        while(j<m){
        ans[k++]=p[j++];
        }
    }
    if(j==m){
        while(i<n){
        ans[k++]=v[i++];
        }
    }
}
}

void mergesort(vector<int>&v){
      int n=v.size();
      int n1=n/2;
      int n2=n-n1;
    vector<int>a(n1);
    vector<int>b(n2);
    if(n==1){return;}
    for(int i=0; i<n1; i++){
        a[i]=v[i];
    }
    for(int i=0; i<n2; i++){
        b[i]=v[n1+i];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}





int main(){
int n;
 cin>>n;
//  int m;
//  cin>>m;
vector<int>v(n);
// vector<int>p(m);
for(int i=0; i<n; i++){cin>>v[i];}
// for(int i=0; i<m; i++){cin>>p[i];}
mergesort(v);
// mergesort(p);
// merge(v,p);
for(int i=0; i<n; i++){cout<<v[i]<<" ";}
}