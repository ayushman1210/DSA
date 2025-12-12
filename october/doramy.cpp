#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
map<int,int>mpp;
for(int i=0; i<n; i++){
    mpp[v[i]]++;
}
if(mpp.size()<=2 && abs((mpp.begin()->second)-(mpp.rbegin()->second))<=1){cout<<"Yes"<<endl;}
else{cout<<"No"<<endl;}
    }

}