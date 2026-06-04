#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    bool ok=true;
    while(n>0){
        long long ld=n%10;
        
        if(ld!=7 && ld!=4){ok=false; break;}
        n=n/10;
    }
    if(ok){cout<<"YES";}
    else{cout<<"NO";}
}