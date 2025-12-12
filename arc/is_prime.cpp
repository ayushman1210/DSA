#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n){
if(n<=1){return false;}
if(n==2){return true;}
if(n%2==0){return false;}
for(int i=3; i*i<=n; i+=2){
    if(n%i==0){return false;}
}
return true;
}
int main(){
string s;
cin>>s;
int sum=0;
for(char c:s){
    if(c>='A' && c<='Z'){sum-=(32+c);}
    else if(c>='a' && c<='z'){sum+=(c-32);}
}
if(sum<0){sum=abs(sum);}
cout<<(check_prime(sum)? "1":"0");
}