#include <iostream>
#include <stack>
using namespace std;


int priority(char c){
    if(c=='+' || c=='-') return 1;
    else if(c=='*' || c=='/') return 2;
    else return 0;
}

string calculate(string a, string b, char op){
    string s="";
    s.push_back(op);
    s+=a;
    s+=b;
    return s;
}
int infix(string s){
    stack<char> st;
    stack<string> n;

    for(int i=0; i<s.size(); i++){
        int ascii = s[i];

        if(ascii >= 48 && ascii <= 57){
            n.push(to_string(ascii - 48));
        }
        else{
            if(st.empty()){
                st.push(to_string(s[i]));
            }
            //opening and closing brackets 
            else if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(st.top()!='('){
                    char op = st.top();
                    st.pop();
                    string b = n.top(); n.pop();
                    string  a = n.top(); n.pop();
                    n.push(calculate(a,b,op));
                }
                st.pop();
            }

            else if(priority(s[i]) > priority(st.top())){
                st.push(s[i]);
            }
            else{
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    char op = st.top();
                    st.pop();
                    string b = n.top(); n.pop();
                    string a = n.top(); n.pop();
                    n.push(calculate(a,b,op));
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        char op = st.top();
        st.pop();
        string b = n.top(); n.pop();
        string a = n.top(); n.pop();
        n.push(calculate(a,b,op));
    }

    return n.top();
}

 




int main(){
    string s="(2+6)*4/8-1";
    cout<<infix(s);
}