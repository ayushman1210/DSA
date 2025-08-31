#include <bits/stdc++.h>
using namespace std;

void prime(int n){
    bool prime[n+1];
    fill(prime, prime+n+1, true);
    prime[0]=prime[1]=false;

    for(int i=2; i*i<=n; i++){
    cout<<i;
    if(prime[i]){
    for(int j=i*i; j<=n; j++)
    prime[j]=false;
    }
    }
}
int main(){
int n;
 cin>>n;
prime(n);
}