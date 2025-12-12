#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 int t;
 cin>>t;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
long long l=0;
long long  high=1e18;
while(l<high){
    int mid=(l+high)/2;
    if(mid==t){return l;}
    else if (mid>t){high=mid;}
    else if (mid<t){l=mid+1;}
}
}