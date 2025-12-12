#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 int t;
 cin>>t;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}


vector<int>psum;
int sum=0;
int first=v[0];
psum.push_back(first);
for(int i=1; i<n; i++){
    psum.push_back(psum[i-1]+v[i]);
}

while(t--){
    int l;
cin>>l;
int r; 
cin>>r;
if(l==0){ sum=psum[r]; cout<<sum<<endl;}
else{
 sum=psum[r]-psum[l-1];
cout<<sum<<endl;
}
}



    }
