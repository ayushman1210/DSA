#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
bool flag=false;
for(int i=0; i<t-1; i++){
    for(int j=i+1; j<t; j++){
        if(v[i]==v[j]){flag=true; break;}
    }
}
if (flag){cout<<"duplicate present ";}
else{cout<<"not present ";}
}