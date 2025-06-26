#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
vector<char>st;
for(int i=0; i<s.size(); i++){
    if(s[i]>='X'){st.push_back(s[i]);}
}
int t=st.size();
for(int i=0;i<t-1; i++){
for(int j=0; j<t-1-i; j++){
    if(st[j]<st[j+1]){swap(st[j],st[j+1]);}
}
}
for(int i=0; i<t; i++){cout<<st[i];}
}