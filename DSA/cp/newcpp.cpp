#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
while(n--){
    int a; int b; int c; int d;
    cin>>a>>b>>c>>d;
    if(a==b && c==d && b==c && d==a){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
}