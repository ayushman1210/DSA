#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
 int n;
 cin>>n;

vector<int>v(n);
int cnt=0;
 if(n==1){cout<<cnt<<endl; break;}
for(int i=0; i<n; i++){cin>>v[i];}
for(int i=1; i<n; i++){
    if(v[i]<v[i-1]){cnt++;}
}
cout<<cnt<<endl;
    }
}