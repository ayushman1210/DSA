#include<bits/stdc++.h>
using namespace std;


int rec(int n, vector<int>&dp){
    // memoization
    if(n==0 || n==1){return n;}
    // if(dp[n]!=-1){return dp[n];}
    // return dp[n]=rec(n-1,dp)+rec(n-2,dp);

    //tabuation 
    int a=0;
    int b=1;
    for(int i=2; i<=n; i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return b;
}


int main(){
    int n;
    cin>>n;
vector<int>v(n+1,-1);
cout<<rec(n,v);


}