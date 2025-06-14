#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int count=0;
while(true){
    bool flag=true;
for(int i=0; i<t; i++){
    if(v[i]%2==0){v[i]=v[i]/2;}
    else{flag=false; break;}
}
if(flag) count++;
else break;
}
cout<<count;
}