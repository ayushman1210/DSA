#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
string s;
cin>>s;
int cnt=0;
int cnt1=0;
for(int i=0;i<s.length(); i++ ){
    if(s[i]=='A'){cnt++;}
    else if(s[i]=='D'){cnt1++;}
}
if(cnt>cnt1){cout<<"Anton";}
else if(cnt1>cnt) {cout<<"Danik";}
else{cout<<"Friendship";}
}