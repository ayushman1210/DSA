#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    for(int i=0; i<s.size()-1; i++){if(s[i]==s[i+1]) s[i]=s[0]; s.pop_back();}
    }
}