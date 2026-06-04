#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int y;
    int z;
    cin>>x>>y>>z;
     vector<int>v={x,y,z};
     sort(v.begin(),v.end());
     cout<<abs(v[0]-v[1])+abs(v[2]-v[1]);
}