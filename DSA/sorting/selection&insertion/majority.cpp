#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
// int maj=-1;
// for(int i=0; i<t; i++){
//     int count=0;
//     for(int j=0; j<t; j++){
//         if(v[i]==v[j]){count++;}
//     }
//     if(count>t/2){maj=v[i];}
// }
// cout<<maj;

// sorting method o(nlogn)
sort(v.begin(),v.end());
cout<<v[t/2];
}