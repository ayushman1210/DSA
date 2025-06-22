#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
vector<int>v1;
for(int i=0; i<t; i++){cin>>v[i];}
int i=0; int j=t-1;
while(i<=j){
v1.push_back(v[i]);
i++;
v1.push_back(v[j]);
j--;
}
for(int i=0; i<t; i++){
    cout<<v1[i]<<" ";
}
}