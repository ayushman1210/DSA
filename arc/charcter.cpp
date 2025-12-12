#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;int cnt=0;
 while(n--){
string s;
cin>>s;
for( char c:s){
    if(c=='+'){cnt+=1; break;}
    else if(c=='-'){cnt-=1; break;}
    else if (c=='X'){continue;}
}
 }
cout<<cnt;
}