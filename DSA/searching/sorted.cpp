#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++ ){
    cin>>v[i];
}
int low=0;
int high=t-1;
int x;
cin>>x;
bool flag=false;
while(low<=high){
    int mid=(low+high)/2;
    if(v[mid]==x){
        if( mid == 0 || v[mid-1]!=x)
        {cout<<mid; 
            flag=true;
            break;}
        else{
            high=mid-1;
        }
}
    else if(v[mid]<x){low=mid+1;}
    else if(v[mid]>x){high=mid-1;}
}
if(flag==false){cout<<-1;}
}