#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=0; i<t; i++){
    int count=0;
    for(int j=0; j<t; j++){
        if(i!=j && v[i]==v[j]){count++;break;}
    }
if(count==0){cout<<v[i]; break;}
}
}