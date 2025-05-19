//sorted 
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=0; i<t-1; i++){
    if(v[i]!=v[i+1]-1){cout<<v[i]+1; break;}
}
}

//part 1 done 