#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
int n;
 cin>>n;
 int ld=0;
 int d=1;
 int res=0;
 int count=0;
while(n>0){
    ld=n%10;
  if(ld>0){
     count++;
res=ld*d;
n=n/10;
d=d*10;
  }
else if(ld==0){d*=10; n=n/10;}
if(n>0){cout<<res<<" ";}
}
cout<<endl;
}
}