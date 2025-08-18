#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
    int ans=INT_MAX;
    int idx=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[low]<=v[mid]){
            ans=min(ans,low);
               idx=low;
            low=mid+1;
         
        }
        else{
            ans=min(ans,mid);
            idx=mid;
            high=mid-1;
            
        }
    }
    cout<<idx;
}