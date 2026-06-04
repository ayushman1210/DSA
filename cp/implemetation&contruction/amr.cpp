#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
   vector<pair<int,int>>ans;
 for(int i=0; i<n; i++){
    ans.push_back({v[i],i+1});
 }
 sort(ans.begin(), ans.end());
 vector<int>ind;
 for(int i=0; i<n; i++){
    if(ans[i].first<=k){
        ind.push_back(ans[i].second); 
        k=k-ans[i].first;
    }
    else{
        break;
    }
 }

 cout<<ind.size()<<'\n';
 if(ind.size()>0){
    for(int i=0; i<ind.size(); i++){
    cout<<ind[i]<<' ';
 }
}
}