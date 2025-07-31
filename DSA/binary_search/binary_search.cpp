#include<bits/stdc++.h>
using namespace std;

void  hello(vector<int>v, int low , int high,int target){

}

int main(){
int t;
cin>>t;
int x;
cin>>x;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int low=0;
int high=t-1;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(x==v[mid]){cout<<mid;}
//     else if(x>v[mid]){low=mid+1;}
//     else if(x<v[mid]){high=mid-1;}
//     else {cout<<"not possible "; }
// }
// recursion 
hello(v,low,high,target);

}