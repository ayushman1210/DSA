#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<int>st;
for(char c:s){
    if(st.size()==0 && c==')'){return false;}
    if(c=='('){st.push(c);}
    else st.pop();
}
if(st.size()==0){return true;}
else{return false;}
}
int main(){
    string s="()()))()";
    cout<<check(s);
}