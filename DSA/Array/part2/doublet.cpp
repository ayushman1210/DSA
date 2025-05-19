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
for(int i=0; i<t-1; i++){
     for(int j=i+1; j<t; j++){
        if(v[i]+v[j]==x){cout<<i<<" "<<j<<endl;}
    }
}
}