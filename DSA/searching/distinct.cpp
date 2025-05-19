#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int target;
cin>>target;
int ans=-1;
bool flag=false;
// for(int i=1; i<t; i++){
    //o(n) approach 
    // if(v[i-1]!=v[i]-1){cout<<v[i-1]+1;break;}
    // else{continue;}
 
    // o(logn) approach 
    int low =0;
    int high=t-1;
    while(low<=high){
        int mid=low+ (high-low)/2;
        if(v[mid]==mid) low=mid+1;
        else{
            ans=mid;
            high=mid-1;
         }
    }
    cout<<ans;
}