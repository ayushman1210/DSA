#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);

for(int i=0; i<t; i++){
    cin>>v[i];
}
int res=1;
for(int i=0; i<t; i++){
    res=res*v[i];
}
cout<<res;

}