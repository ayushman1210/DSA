#include<iostream>
#include<stack>
using namespace std;
int main (){
    string s="((((()))))";
    int n=s.size();
    stack<char>st;
    for(int i=0; i<n; i++){
    char ch=s[i];
    if(ch=='('){st.push(ch);}
    else {
        if(st.empty()){cout<<false; break;}
        else{
            if(ch==')'&& st.top()=='('){
                st.pop();
            }
        }
    }
    }
    if(st.size()==0){cout<<"true";}
    else{cout<<"false";}
}