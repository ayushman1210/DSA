#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
long long count=0;
vector<long long>v(t);
for(long i=0; i<t; i++){
    cin>>v[i];
}
for(long i=1; i<t; i++){
    if(v[i]<v[i-1]){
          count+=v[i-1]-v[i];
            v[i]+=v[i-1]-v[i];
           
        }
       
}
 cout<<count;
}