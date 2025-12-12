#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 int t;
 cin>>t;
 int cnt=0;

vector<int>v(n);
for(int i=1; i<=n; i++){cin>>v[i];}
 int val=v[t];
for(int i=1; i<=n; i++){
    if(v[i]>=val && v[i]>0){cnt++;}
}
cout<<cnt;
}