#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
int t;
cin>>t;
vector<int>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
int sum=0;
for(int i=0; i<n; i++){
    if(v[i]<=t){sum+=1;}
    else{sum+=2;}
}
cout<<sum;
}