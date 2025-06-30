#include<bits/stdc++.h>
using namespace std;
int max(float a,float b){
    if(a>=b){return a;}
    else {return b;}
}

int min(float a, float b){
    if(a<b){return a;}
    else {return b;}
}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
float kmin=float(INT_MIN);
float kmax=float(INT_MAX);
bool flag=true;
for(int i=0; i<t-1; i++){
    if(v[i]>=v[i+1]){ kmin=max(kmin,v[i]+(v[i+1])/2.0); 
    }
    else{ kmax=min(kmax, (v[i]+v[i+1])/2.0); }
    if(kmin>kmax){flag=false; break;}
}
if (!flag){cout<<-1;}
else{cout<<kmax<<" " <<kmin; }
}