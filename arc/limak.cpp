#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
int m;
cin>>m;
int cnt=0;
while(n<=m){
    cnt++;
    n=n*3;
    m=m*2;
}
cout<<cnt;
}