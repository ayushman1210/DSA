#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; int k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>p(k);
    vector<int>u;
    for(int i=0; i<n; i++){cin>>v[i];}
    for(int j=0; j<k; j++){cin>>p[j];}
    int i=0; int j=0;
    while(i<n && j<k){
        if(v[i]==p[j]){u.push_back(v[i]); i++; j++; }
        else if(v[i]<p[j]){i++;}
        else{j++;}
    }
    for(auto it:u){
        cout<<it;
    }
}
    