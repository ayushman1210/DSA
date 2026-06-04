#include<bits/stdc++.h>
using namespace std;

long long solve(int n){
    long long cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){cnt++;}
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
       if(solve(n)==3){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}