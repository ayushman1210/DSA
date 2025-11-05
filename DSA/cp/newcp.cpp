#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
while(n--){
    int t;
    cin>>t;
    string s;
    cin>>s;
    string k;
    cin>>k;
    sort(s.begin(), s.end());
    sort (k.begin(), k.end());
    if(s==k){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
}