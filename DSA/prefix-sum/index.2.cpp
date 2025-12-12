#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
vector<int>psum(n);
psum[0]=v[0];
for(int i=1; i<n; i++){
    psum[i]=v[i]+psum[i-1];
}
bool flag=false;
for(int i=0; i<n; i++){
    if(2*psum[i]==psum[n-1]){
        flag=true;
        break;
    }
}
if(flag){cout<<"partion";}
else{cout<<"no";}
}