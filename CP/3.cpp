#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    int c;
    cin>>n;
    cin>>c;
    int sum=0;
    vector<int>v(n);
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cin>>v1[i];
        sum+=v1[i];
    }

    }
}