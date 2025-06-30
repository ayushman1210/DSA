#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n;
cin>>n;
vector<int>v(t);
vector<int>s(n);
for(int i=0; i<t; i++){
    cin>>v[i];
}
sort(v.begin(), v.end());

int count=0;
for(int i=0; i<n; i++){cin>>s[i];}
sort(s.begin(),s.end()); 
int i=0; int j=0;
while(i<t && j<n){
    if(v[i]<=s[j]){count++; i++; j++;}
    else{j++;}
}
cout<<count;
}