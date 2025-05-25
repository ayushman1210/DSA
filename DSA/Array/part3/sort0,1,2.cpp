#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int low=0; 
int mid=0;
int high=t-1;

while(mid<=high){
    if(v[mid]==2){
        swap(v[mid],v[high]);
        high--;
    }
    if(v[mid]==1){mid++;}
 if(v[mid]==0){
    swap(v[mid],v[low]);
    low++;
    mid++;
 }
}
for(int i=0; i<t; i++){cout<<v[i];}
}