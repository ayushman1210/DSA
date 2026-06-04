#include <iostream>
#include <stack>
using namespace std;


int priority(char c){
    if(c=='+' || c=='-') return 1;
    else if(c=='*' || c=='/') return 2;
    else return 0;
}

int calculate(int a, int b, char op){
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else return a/b;
}

int infix(string s){
    stack<char> st;
    stack<int> n;

    for(int i=0; i<s.size(); i++){
        int ascii = s[i];

        if(ascii >= 48 && ascii <= 57){
            n.push(ascii - 48);
        }
        else{
            if(st.empty()){
                st.push(s[i]);
            }
            else if(priority(s[i]) > priority(st.top())){
                st.push(s[i]);
            }
            else{
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    char op = st.top();
                    st.pop();
                    int b = n.top(); n.pop();
                    int a = n.top(); n.pop();
                    n.push(calculate(a,b,op));
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        char op = st.top();
        st.pop();
        int b = n.top(); n.pop();
        int a = n.top(); n.pop();
        n.push(calculate(a,b,op));
    }

    return n.top();
}

 




int main(){
    string s="2+6*4/8-1";
    cout<<infix(s);
}