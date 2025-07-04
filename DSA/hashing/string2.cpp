#include<bits/stdc++.h>
using namespace std;
bool check(char c) {
return (c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
}
int main(){
int t;
cin>>t;


while(t--){
    int t;
    cin>>t;
    string s;
    cin>>s;
    int count=0;
    bool flag=true;
    for(int i=0; i<t; i++){
        if(check(s[i])){count++;}
        if(count>=4){flag=false; break;}
    }
    if(flag==false){cout<<"NO";}
    else{cout<<"Yes";}
    }
}