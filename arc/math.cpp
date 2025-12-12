#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
sort(s.begin(),s.end());
for(int i=0; i<s.length(); i++){
    if(s[i]=='+'){continue;}
    else {cout<<s[i];}
   if(i!=s.length()-1) cout<<"+";
}
}