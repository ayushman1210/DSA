#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<int>st;
    for(char c:s){
        if(st.top()==c){st.push(c);}
        else{i++;}
    }
}
int main(){
    string s="ababbcd";
    cout<<check(s);
}