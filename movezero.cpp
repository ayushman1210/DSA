#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    int i=0;
    if(v[i]!=0){i++;}
    for(int j=i+1; j<n; j++){
        if(v[j]!=0){swap(v[i],v[j]); i++;}
    }
    for(int i=0; i<n; i++){cout<<v[i];}
}