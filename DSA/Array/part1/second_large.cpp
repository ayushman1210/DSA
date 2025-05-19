#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int large=INT_MIN;
int slarge=-1;
for(int i=0; i<t; i++){
if(v[i]>large){
    slarge=large;
    large=v[i];
}
}
cout<<large<<slarge;
}
