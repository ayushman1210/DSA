#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int sum=0; 
int sum1=0;
for(int i=0; i<t; i++){
    if(i%2==0){sum+=v[i];}
    else{sum1+=v[i];}
}
cout<<abs(sum-sum1);
}