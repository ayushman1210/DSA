#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
int freq[100001]={0};
for(int i=0; i<n; i++){
    freq[v[i]]++;
}
for(int i=0; i<100001; i++){
    if(freq[i]>0){cout<<freq[i]<<" "<<i<<endl;}
}
}