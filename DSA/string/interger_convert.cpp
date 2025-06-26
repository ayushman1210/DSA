#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
vector<int>st;
for(int i=0; i<s.size(); i++){
    st.push_back(s[i]-'0');
}
for(int i=0; i<st.size(); i++){
    cout<<st[i];
}
}