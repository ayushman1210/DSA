#include<iostream>
#include<stack>
using namespace std;

int pri(char s){
    
    if(s=='^'){return 3;}
    else if(s=='*' || s=='/'){return 2;}
    else if(s=='+' || s=='-'){return 1;}
    else{
        return -1;
    }
}

int main(){


string s="a+b*c+d-e(a/b)";
string ans="";
stack<char>st;
int n=s.size();

for(int i=n-1; i>=0; i--){

char ch=s[i];

if(ch>='A' && ch<='Z' || ch<='z' && ch>='a' ){
    ans+=(ch);
}

else if(ch==')'){st.push(ch);}

else if(ch=='('){
    while(st.empty() && st.top()!=')'){ans+=(st.top()); st.pop(); }
    st.pop();
}

else {
    while(st.empty() && pri(st.top())>=pri(ch)){
        ans+=st.top();
        st.pop();
    }
 st.push(ch);
}

}

while(!st.empty()){
    ans+=(st.top());
    st.pop();
}

reverse(ans.begin(), ans.end());
}