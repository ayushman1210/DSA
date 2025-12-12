#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
vector<int>ans;
for(int i=0; i<n-1; i++){cin>>v[i];}
for(int i=0;i<n; i++){
    if(i==n-1){
        if(v[i-1]==1){ans.push_back(2);}
        else{ans.push_back(1);}
    }
    if(v[i]==0){ans.push_back(v[i+1]);}
    else{
        ans.push_back(v[i]);
    }
}
for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
}
}