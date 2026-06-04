#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0; i<=n; i++){
       long long sec =n;
        long long fir=i;

        bool valid=true;
        for(int j=k-2; j>=0; j--){
            long long ele=sec-fir;
            if(sec<fir || ele<0){
                valid=false;
                break;
            }
            sec=fir;
            fir=ele;
        }
           if(valid){ans++;}
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}