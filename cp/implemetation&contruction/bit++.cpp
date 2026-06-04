#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=0;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='+' || s[2]=='+'){x+=1;}
        else if(s[0]=='-'|| s[2]=='-'){x-=1;}
    }
    cout<<x;
}