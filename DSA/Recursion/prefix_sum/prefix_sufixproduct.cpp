#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
// while(i<=j){
//     v[i]=v[i]*v[i-1];
//     i++;
// }
// while(i<=j){
//    v[j]=v[j]*v[j+1];
//     j--;
// }
vector<int>pre;
vector<int>suf;
vector<int>ans;
pre[0]=v[0];
int pro=1;
for(int i=1; i<n; i++){
    pro=pro*v[i-1];
    pre[i]=pro;
}
for(int i=0; i<n; i++){cout<<pre[i]<<" ";}
}