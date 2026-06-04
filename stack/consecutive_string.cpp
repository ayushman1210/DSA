#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aabbccddeeff";
   stack<char>st;
vector<char>ans;
for(int i=0; i<s.length(); i++){
    // if(s[i]!=st.top()){
    //     st.push(s[i]);
    // }
    // else{i++;}
    if(s[i]==st.top()){st.pop(); ans.push_back(s[i]);}
    else{
        st.push(s[i]);
    }
}
for(int i=0; i<ans.size(); i++){
    cout<<ans[i];
}

}