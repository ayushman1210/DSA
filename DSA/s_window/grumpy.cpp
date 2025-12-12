#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
vector<int>v1(n);
for(int i=0; i<n; i++){cin>>v1[i];}
int k;
cin>>k;
int maxi=INT_MIN;
for(int i=0; i<=n-k; i++){
    int res=0;
    for(int j=i; j<k+i; j++){
        res+=v[j];
    }
    for(int j=0; j<i; j++){
        if(v1[j]==0){res+=v[j];}
    }
    for(int j=k+i; j<n; j++){
        if(v1[j]==0){res+=v[j];}
    }
    maxi=max(maxi,res);
}
cout<<maxi;
}