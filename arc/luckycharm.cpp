#include <bits/stdc++.h>
using namespace std;
int main(){
long long  n;
 cin>>n;
long long  cnt=0;
while(n>0){
long long ld=n%10;
n=n/10;
if(ld==4 || ld==7){ cnt++;}

}
if(cnt==4 || cnt==7){cout<<"YES";}
else {cout<<"NO";}}