#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
  
    while(t--){
        int n; cin>>n;
        string s;
    bool ok=true;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]==s[n-i-1]){continue;}
            else{
                if(abs(s[i]-s[n-i-1])!=2){
                    ok=false;
                    break;
                }
            }
        }
        if(ok){cout<<"YES"<<'\n';}
        else{cout<<"NO"<<'\n';}
    }

}