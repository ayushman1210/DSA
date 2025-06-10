#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
int mini=INT_MAX;
 int count=0;
for(int i=0; i<t; i++){
cin>>v[i];
}
for(int i=0; i<t; i++){
   if(mini>v[i]){mini=v[i]; count=count*0;}
    if(mini==v[i]){count++;}
}
if(count%2!=0){cout<<"Lucky";}
else{cout<<"Unlucky";}
}