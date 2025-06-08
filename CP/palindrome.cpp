#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ld=0;
int rev=0;
while(t>0){
      ld=t%10;
      t=t/10;
    if(ld==0 && rev==0){continue;}
    else{
        rev=rev*10+ld;
    }
}
cout<<rev;
}