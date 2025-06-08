#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=2; i<=t; i++){
    bool flag=false;
    for(int j=2; j*j<=i; j++){
        if(i%j==0 ){flag=true; break;}
    }
    if(flag==false){cout<<i<<" ";}
}

}