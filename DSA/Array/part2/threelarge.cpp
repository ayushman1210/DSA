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
int slarge=INT_MIN;
int tlarge=INT_MIN;
for(int i=0; i<t; i++){
   if(large<v[i]){large=v[i];}
}
for(int i=0; i<t; i++){
    if(v[i]!=large && slarge<v[i]){slarge=v[i];}
}
for(int i=0; i<t; i++){
    if(v[i]!=slarge && tlarge<v[i] && v[i]!=large){tlarge=v[i];}
}
cout<<large<<endl;
cout<<slarge<<endl;
cout<<tlarge;
}