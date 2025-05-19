#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int x; 
cin>>x;
int low=0; 
int high=t-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid]==x){
        if(v[mid]==v[mid+1]){high=high+1;}
        return mid;
    }
    else if(v[mid]>x){high=mid-1;}
    else if(v[mid]<x){low=mid+1;}
}
}