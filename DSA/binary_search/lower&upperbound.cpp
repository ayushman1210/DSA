#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
//lowerbound
int x;
cin>>x;
int low=0;
int high =t-1;
int idx=t;
// while(low<=high){
    // int mid=(low+high)/2;

    // if(v[mid]>=x){idx=mid; high=mid-1;}
    // else{
    //     low=mid+1;
    // }

    //upperbound 
    // if(v[mid]>x){idx=mid; high=mid+1;}
    // else{low=mid-1;}


// }
// cout<<idx;

int lb=lower_bound(v.begin(), v.end(), x)-v.begin();
int ub=upper_bound(v.begin(), v.end(), x)-v.begin();
cout<<ub<<lb;
}