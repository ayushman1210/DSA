#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int target;
cin>>target;
bool flag=false;
for(int i=0; i<t; i++){
    if(v[i]==target){flag=true; break;}
    else{flag=false;}
}
if(flag){
    cout<<"element present";
}
else{
    cout<<"element not present";
}
}