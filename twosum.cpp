#include<bits/stdc++.h>
using namespace std;
int main(){
       int n; 
    cin>>n;
    vector<int>v(n);
    int k; cin>>k;

    
    for(int i=0; i<n; i++){cin>>v[i];}

    // brute force
    // for(int i=0; i<n-1 ;i++){
    //     for(int j=i+1; j<n; j++){
    //         if(v[i]+v[j]==k){cout<<i<<" "<<j<<endl; }
    //     }
    // }

    //optimal approach 
int l=0; int r=n-1;
while(l<r){
    if(v[l]+v[r]==k){cout<<l<<" "<<r<<endl; l++;}
    else if(k>v[l]+v[r]){l++;}
    else{r--;}
} 
 
}