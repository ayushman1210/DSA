#include<bits/stdc++.h>
using namespace std;

int main(){
 string s;
 cin>>s;
 bool ok=false;
 int n=5;
 while(n--){
    string st;
    cin>>st;
 int i=0;
 int j=1;
 if(s[i]==st[i] || s[j]==st[j]){ok=true; break;}
 }   
 if(ok){cout<<"YES";}
 else{cout<<"NO";}
}