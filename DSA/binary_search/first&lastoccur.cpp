#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
// int first=-1;
// int last=-1;
int x;
cin>>x;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}

// brute force 
// for(int i=0; i<n; i++){
//     if(v[i]==n){ if(first==-1){first=i;} last=i;}
// }
// cout<<first<<last;

// optimised 
int first=lower_bound(v.begin(),v.end(), x)-v.begin();
int last=upper_bound(v.begin(),v.end(), x)-v.begin();

if(first==n || v[first]!=x){first=-1; last=0;}
cout<<first<<" "<<last-1;
cout<<first+last-1-1;
// using raw binary search 



}