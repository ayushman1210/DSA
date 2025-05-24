#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=0; i<t-1; i++){
    for(int j=i+1; j<t; j++){
if(v[i]>v[j]){
    int temp=v[j];
     v[j]=v[i];
      v[i]=temp;}
}}
for(int i=0; i<t; i++){
    cout<<v[i]<<endl;
}
} 