#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int minimum=INT_MAX;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=0; i<t ;i++){
    if(minimum>v[i]){
        minimum=v[i];
    }
}
cout<<minimum;
}