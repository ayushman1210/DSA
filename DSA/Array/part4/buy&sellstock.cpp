#include<bits/stdc++.h>
using namespace std;
int main(){
   
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
cin>>v[i];
}

 //bruteforce approch 
 
// int mini=INT_MAX;
// int idx=-1;
// for(int i=0; i<t; i++){
//     if(v[i]<mini){mini=v[i]; idx=i;}
// }
// int maxi=INT_MIN;
// for(int i=idx; i<t; i++){
// if(v[i]>maxi){maxi=v[i];}
// }
// cout<<maxi-mini;

// better approach 
int profit=0;
int mini=v[0];
for(int i=1; i<t; i++){
    int cost=v[i]-mini;
    profit=max(profit,cost);
    mini=min(mini,v[i]);
}
cout<<profit;
}