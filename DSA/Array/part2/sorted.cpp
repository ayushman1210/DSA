#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
bool flag=false;
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=1; i<t; i++){
    if(v[i-1]<v[i]){flag=true;}
    else{flag=false; break;}
}
if(flag==true){cout<<"sorted";}
else{cout<<"not sorted ";}
}