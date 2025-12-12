#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
int k;
cin>>k;
int max_sum=0;
int sum=0;
for(int i=0; i<k; i++){
    sum+=v[i];
    if(sum>max_sum){max_sum=sum;}
}
for(int j=k; j<n; j++){
    sum+=v[j]-v[j-k];
    if(sum>=max_sum){max_sum=sum;}
}
cout<<max_sum;
}