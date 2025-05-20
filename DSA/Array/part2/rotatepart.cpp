#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&v , int s, int e){
    while(s<=e){
        int temp=v[s];
        v[s]=v[e];
        v[e]=temp;
        s++;
        e--;
    }}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int k;
cin>>k;
if(k>t){k=k%t;}
rotate(v,0,t-k-1);
rotate(v,t-k, t-1);
rotate(v,0,t-1);
for(int i=0; i<t; i++){
    cout<<v[i];
}
}