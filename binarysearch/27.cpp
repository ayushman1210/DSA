#include <bits/stdc++.h>
using namespace std;

int box(vector<vector<int>>q,int n, int mid){
int count=0;
for(int i=0; i<n; i++){
    count+=upper_bound(q[i].begin(),q[i].end(),mid)-q[i].begin();
}
return count;
}

int search(vector<vector<int>>k, int n, int m){
    int req=(n*m)/2;
    int low=INT_MAX;
    int high=INT_MIN;
for(int i=0; i<n; i++){
    low=min(low,k[i][0]);
    high=max(high,k[i][m-1]);
}

while(low<=high){
    int mid=(low+high)/2;
    int sum=box(k,n,mid);
    if(sum<req){low=mid+1;}
    else{high=mid-1;}
}
return low;

}

int main(){
int n;
 cin>>n;
int m ;
cin>>m;
vector<vector<int>>v(n,vector<int>(m));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>v[i][j];
    }
}

// better force 

// vector<int>ans;
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         ans.push_back(v[i][j]);
//     }
// }
// sort(ans.begin(), ans.end());
// int l=0; int h=ans.size();
// cout<<ans[(l+h)/2];

// better 
cout<<search(v,n,m);


}