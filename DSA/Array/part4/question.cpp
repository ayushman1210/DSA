#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
while(n--){
    int t;
cin>>t;
int cone=0;
int cono=0;
vector<int>v(t);
for(int i=0; i<t; i++){cin>>v[i]; if(v[i]%2==0){cone++;}else {cono++;}}
    int count=0;
if(t%2!=0){ cout<<-1<<endl;}
else if(cone==t/2 && cono==t/2){cout<<0<<endl; }
else {cout<<abs(cone-t/2)<<endl; }
}
}