#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string t=s;
    reverse(t.begin(), t.end());
    if(s==t){cout<<"yes";}
    else{cout<<"NO";}
}