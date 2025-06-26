#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    vector<int>v(x);
    int cnt=0;
    int cn=0;
    for(int i=0; i<x; i++){cin>>v[i]; if(v[i]==1){cnt++;} else cn++;}
    bool flag=true;
    for(int i=0; i<x; i++){
        for(int j=0; j<x-1; j++){if(v[i]==v[i+1]){flag=true;} else {flag=false; break;}}
    }
    if(flag==true){cout<<0<<endl;}
    else if(flag==false && cn==cnt){cout<<cn/2<<endl;}
    else if(flag==false && cn<cnt){cout<<cn<<endl;}
    else{cout<<cnt/2;}
    }
}