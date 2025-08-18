#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    vector<int>v(n);
    int k; cin>>k;

    
    for(int i=0; i<n; i++){cin>>v[i];}

     //brute force
    // int log=-1;
    // for(int i=0; i<n; i++){
    //      int sum=0;
    //     for(int j=i; j<n; j++){
    //         sum+=v[j];
    //         if(sum==k){log=max(log,j-i+1);}
    //         if(sum>k){break;}
    //     }
    // }
    // cout<<log;


//optimal 

// int l=0; int r=0;
// int len=0;
// int sum=v[0];
// while(r<n){
//     while( l<=r && sum>k){
// sum-=v[l];
// l++;
//     }
//     if(sum==k){len=max(len,r-l+1);}
//     r++;
//     if(r<n){sum+=v[r];}
// }
// cout<<len;
}