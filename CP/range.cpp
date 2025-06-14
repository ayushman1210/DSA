#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int q;
cin>>q;
int l;
int r;
vector<int>v(t);
for(int i=1; i<=t; i++){cin>>v[i];}
while(q--){
        cin>>l; cin>>r;
        int sum=0; 
        for(int i=l; i<=r; i++){
        sum+=v[i];
        }
        cout<<sum<<endl;
        }
}