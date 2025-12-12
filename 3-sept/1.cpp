#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
 cin>>n;
vector<int>v(n);
bool flag=true;
for(int i=0; i<n; i++){cin>>v[i];}
for(int i=1; i<n; i++){if(v[i]<v[i-1]){cout<<"no"; break;}}
}
}
// for(int i=1; i<n-1; i++){
//     if(v[i]>v[i-1]){continue;}
//     else if (v[i]>v[i-1] &&  v[i]<v[i+1]){
//         swap(v[i],v[i+1]);
//     }
//     else {flag=false; break;}
// }
// for(int i=1; i<n; i++){
//     if(v[i]>v[i-1]){flag=true;}
//     else flag=false;
// }
// if(flag){cout<<"Yes"<<endl;}
// else{cout<<"no"<<endl;}
// }
// }