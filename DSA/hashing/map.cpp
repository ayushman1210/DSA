#include <bits/stdc++.h>
using namespace std;
int main(){
// int n;
//  cin>>n;

string s;
cin>>s;
string t;
cin>>t;

// vector<int>v(n);
// for(int i=0; i<n; i++){cin>>v[i];}
// map<int,int>mpp;
// for(int i=0; i<n; i++){
//     mpp[v[i]]++;
// }
// for(auto &it:mpp){
//    cout<<it.first<<" "<<it.second;
// }

map<char,int>mpp;
// for(int i=0; i<s.size(); i++){
//     mpp[s[i]]++;
// }
// for(auto &it:mpp){
//     if (it.second==1){cout<<it.first; break;}
// }
// for(int i=0; i<s.size(); i++){
//     if(mpp[s[i]]==1){cout<<s[i]; break;}
// }

for(int i=0; i<s.size(); i++){
    mpp[s[i]]++;
}
for(int i=0; i<t.size(); i++){
    mpp[t[i]]--;
}
bool flag=true;
for(auto &it:mpp){
    if (it.second!=0){flag =false;break;}
}
if(flag){cout<<true;}
else{cout<<false;}
}