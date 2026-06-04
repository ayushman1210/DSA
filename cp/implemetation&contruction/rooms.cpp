#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n;
    int cnt=0;
    for(int i=0; i<n; i++){
        cnt++;
        if(s[i]=='1'){
             cnt++;
             ans=max(ans,(i+1)*2);
        }
    }
    ans=max(ans,cnt);
    reverse(s.begin(),s.end());
    cnt =0;
     for(int i=0; i<n; i++){
        cnt++;
        if(s[i]=='1'){
             cnt++;
             ans=max(ans,(i+1)*2);
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<'\n';
    }
}