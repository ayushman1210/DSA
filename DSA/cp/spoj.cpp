#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
// while(true){
//     ll x;
//     cin>>x;
//     if(x==42){break;}
//     cout<<x<<endl;
// // }
ll t;
cin>>t;
ll res=t/2;
ll i=1;
ll j=res-i;
ll cnt=0;
while(i<j && t%2==0){
i++;
j--;
cnt++;
}
cout<<cnt<<endl;
}