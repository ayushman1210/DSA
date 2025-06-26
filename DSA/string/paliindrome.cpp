#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
 reverse(s.begin(), s.end());
 string t=s;
if(s==t){cout<<"yes"<<s+t;}
else{cout<<"no";}
}