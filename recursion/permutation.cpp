#include<bits/stdc++.h>
using namespace std;

void permutation(string ans, string s){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.size(); i++){
        char ch=s[i];
        string l=s.substr(0,i);
        string r=s.substr(i+1);
        permutation(ans+ch, l+r);
    }
}
int main(){
    string s="abc";
    string ans="";
    permutation(ans,s);
}