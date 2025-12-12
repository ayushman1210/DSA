#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
map<char,int>mpp;
for(int i=0; i<s.length(); i++){
   mpp[s[i]]++;
}
int cnt=0;
for(auto it:mpp){
    if(it.second>0){cnt++;}
}
if(cnt%2==0){cout<<"CHAT WITH HER!";}
else{cout<<"IGNORE HIM!";}
}