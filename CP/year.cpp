#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a,b;
int pass=0;
int maxi=INT_MIN;
while(t--){
    cin>>a>>b;
    pass=pass-a;
    pass=pass+b;
    if(pass>maxi){maxi=pass;}
}
cout<<maxi;
}