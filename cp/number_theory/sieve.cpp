//  prime number in given range 
#include<bits/stdc++.h>
using namespace std;

// vector<bool>sieve(int n){
// vector<bool>primes(n+1,true);
// primes[0]=false;
// primes[1]=false;
//  for(int i=2; i*i<=n; i++){
// if(primes[i]==true){
//     for(int j=i*i; j<=n; j+=i){
//         primes[j]=false;
//     }
//     }
// }
// return primes;
// }


vector<bool>sieve(int n){
    vector<bool>p(n+1,true);
    p[0]=false;
    p[1]=false;
    for(int i=2; i*i<=n; i++){
        if(p[i]==true){
        for(int j=i*i; j<=n; j+=i){
            p[j]=false;
        }
    }
    }
    return p;
}


int main(){
    // int n;
    // cin>>n;
    // vector<bool>prime=sieve(n);
    // for(int i=1; i<=n; i++){
    //     if(prime[i]==true){
    //         cout<<i<<" ";
    //     }
    // }

    int n;
    cin>>n;
    vector<bool>p=sieve(n);
    for(int i=1; i<=n; i++){
        if(p[i]==true){
            cout<<i<<" ";
        }
    }
}