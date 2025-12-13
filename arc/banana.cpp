#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
int m;
cin>>m;
int k;
cin>>k;
int sum=0;
for(int i=1; i<=k;i++ ){
    sum+=n*i;
}
if(sum-m<0){cout<<0;}
else{
 cout<<sum-m;   
}

}