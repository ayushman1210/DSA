#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
int st=0;
int ed=n-1;
int pvt=v[st];
int cnt=0;
for(int i=0; i<n; i++){
    if(pvt>v[i]){
        cnt++;
    }
}
swap(pvt,v[cnt]);
for(int i=0; i<n; i++){cout<<v[i];}
}