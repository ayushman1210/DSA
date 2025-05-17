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
bool flag=false;
while(low<=high){
    int mid=(low+high)/2;
    if(v[mid]==x){ cout<<v[mid-1]; flag=true; break;}
    else if(v[mid]<x){low=mid+1;}
    else{ high=mid-1;}
}
if(flag==false){cout<<v[high];}
}