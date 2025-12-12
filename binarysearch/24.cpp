#include <bits/stdc++.h>
using namespace std;

// int binary(vector<int> &q,int tar){
//     int low=0;
//     int high=q.size()-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(q[mid]==tar){return mid;}
//         else if(q[mid]>tar){high=mid-1;}
//         else { low=mid+1;}
//     }
//     return -1;
// }

int main(){
int n;
 cin>>n;
int m ;
cin>>m;
int tar;
cin>>tar;
vector<vector<int>>v(n,vector<int>(m));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>v[i][j];
    }
}

// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//        if(tar==v[i][j]){cout<<i<<j;}
//     }
// }

// better

// for(int i=0; i<n; i++){
//     int low=v[i][0];
//     int high=v[i][m-1];
//     if(tar>=low && tar<=high ){cout<<binary(v[i],tar);}
// }

// best 

int l=0; int h=(n*m)-1;
while(l<=h){
    int mid=(l+h)/2;
    int i=mid/m;
    int j=mid%m;
int r=v[i][j];
if(r==tar){cout<<i<<" "<<j; return 0;}
else if(r<tar){l=mid+1;}
else { h=mid-1;}
}
cout<<"not found"; 
}