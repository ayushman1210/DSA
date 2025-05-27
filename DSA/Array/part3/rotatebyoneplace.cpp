#include<bits/stdc++.h>
using namespace std;
int rotate(vector<int>&v, int n, int t){
    while(n<=t){
        swap(v[n],v[t]);
        n++;
        t--;
    }
}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
rotate(v,1,t-1);
rotate(v,0,t-1);
for(int i=0; i<t; i++){
    cout<<v[i];
}
}