#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cin>>n;



// int rev=0;
while(n--){
    int t;
cin>>t;
int ld=0;
if(t==0){cout<<0<<endl; continue;}
while(t>0){
      ld=t%10;
      if(ld>=0){cout<<ld<<" ";}
      t=t/10;
}
cout<<endl;
// cout<<rev<<" ";
// if(ori==rev){cout<<"YES";}
// else{cout<<"NO";}
}
}