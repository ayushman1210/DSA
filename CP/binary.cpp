#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int x;
cin>>x;
vector<int>v(t);
for(int i=0; i<t; i++){cin>>v[i];}
sort(v.begin(), v.end());
while(x--){
    int p;
    cin>>p;
bool flag=false;
int low=0;
int high=t-1;

while(low<=high){
    int mid=(low+high)/2;
    if(v[mid]==p){flag=true; break;}
   else  if(v[mid]>p){high=mid-1;}
else if(v[mid]<p){low=mid+1;}

}
if(flag==true){cout<<"found"<<endl;}
else{cout<<"not found"<<endl;}
}
}