#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int p;
cin>>p;
vector<vector<int>>v(t,vector<int>(p));
for(int i=0; i<t; i++){
    for(int j=0; j<p; j++){
        cin>>v[i][j];
    }
}
int x;
cin>>x;
bool flag=false;
for(int i=0; i<t; i++){
    for(int j=0; j<p; j++){
       if(x==v[i][j]) {flag=true; break;}
    }
    if(flag==true){break;}
}
if(flag==true){cout<<"will not take number";}
else{cout<<"will take number";}
}