#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 int t;
 cin>>t;
 for(int i=0; i<t; i++){
    int ld=n%10;
    if(ld!=0){
        n=n-1;
    }
    else {
        n=n/10;
    }
 }
 cout<<n;
}