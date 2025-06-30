#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}vector<int>v1(t,0);

int k=0;
for(int i=0; i<t; i++){
int min=INT_MAX;
int idx=-1;
for(int j=0; j<t; j++){
    if(v[j]<=0){continue;}
    // if(v1[j]==1){continue;}
    if(v[j]<min){min=v[j]; idx=j;}
}
v[idx]=-k;
// v1[idx]=1;
k++;
}
for(int i=0; i<t; i++){cout<<-v[i]<<" ";}
}
