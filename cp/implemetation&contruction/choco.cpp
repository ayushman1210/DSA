#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long>v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    long long sum=0;
    sum+=v[n-1];
    long long mx=v[n-1]-1;
    for(int i=n-2; i>=0; i--){
      sum+=min(v[i],mx);
      mx=min(mx,v[i])-1;
      if(mx<=0){break;}
    }
    cout<<sum;
}