#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int x;
cin>>x;
int count=0;
for(int i=0; i<t; i++){
if(v[i]>x){count++;}
}
cout<<count;
}