#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
vector<long long >v;
v.push_back(t);
while(t!=1){
if(t%2==0){t=t/2; v.push_back(t);}
else{t=t*3+1; v.push_back(t);}
}
for(long long  x:v){
    cout<<x<<" ";
}
}