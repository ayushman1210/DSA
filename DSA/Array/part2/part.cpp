#include<bits/stdc++.h>
using namespace std;
void part(vector<int> &v, int s, int e){
while(s<=e){
    int temp=v[s];
    v[s]=v[e];
    v[e]=temp;
    s++;
    e--;
}
}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int s;
int e;
cin>>s>>e;
part(v,s,e);
for(int i=0; i<t; i++){
    cout<<v[i];
}
}