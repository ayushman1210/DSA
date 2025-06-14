#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    bool flag = true;
    if(s.length() != a + b + 1 || s[a] != '-') {
        flag = false;
    } else {
        for(int i = 0; i < a; i++) {
            if(!isdigit(s[i])) flag = false;
        }
        for(int i = a + 1; i < a + b + 1; i++) {
            if(!isdigit(s[i])) flag = false;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
}