#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>res;
    vector<int>v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
res.push_back(v[0]);
for(int i=1; i<n; i++){
    if(v[i-1]<=v[i]){res.push_back(v[i]);}
    else{res.push_back(v[i]); res.push_back(v[i]); }
}
cout<<res.size()<<endl;
for(auto x: res){cout<<x<<" ";} cout<<endl;
}

int main(){
//     int q;
//     cin>>q;
//     while(q--){
// int n;
//  cin>>n;
// vector<int>v(n);
// for(int i=0; i<n; i++){cin>>v[i];}
// for(int j=0; j<n; j++){
// for(int i=1; i<n-1; i++){
//     if(v[i-1]<v[i] && v[i+1]<v[i]){swap(v[i],v[i+1]);}
// }
// }
// bool flag=true;
// for(int i=1; i<n; i++){
//     if(v[i-1]<=v[i]){flag=true;}
//     else {flag=false; break;}
// }
 
// if(flag){cout<<"YES"<<endl;}
// else{cout<<"NO"<<endl;}
//     }


// int t;
// cin>>t;
// int score[10][10]={
//     1,1,1,1,1,1,1,1,1,1,
//     1,2,2,2,2,2,2,2,2,1,
//     1,2,3,3,3,3,3,3,2,1,
//     1,2,3,4,4,4,4,3,2,1,
//     1,2,3,4,5,5,4,3,2,1,
//     1,2,3,4,5,5,4,3,2,1,
//     1,2,3,4,4,4,4,3,2,1,
//     1,2,3,3,3,3,3,3,2,1,
//     1,2,2,2,2,2,2,2,2,1,
//     1,1,1,1,1,1,1,1,1,1,
// };

// while(t--){
//     int ans=0;
// for(int i=0; i<10; i++){
//     for(int j=0; j<10; j++){
//         char ch;
//         cin>>ch;
//         if(ch=='X'){ans+=score[i][j];}
//     }
// }
// cout<<ans<<endl;
// }


int t;
cin>>t;
while(t--){
    solve();
}
}