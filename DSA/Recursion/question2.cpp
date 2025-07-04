#include<bits/stdc++.h>
using namespace std;

int check(int x){
if(x%2!=0){return false;}
if(x==2){return true;}
return check(x/2);
}

void check1(int x){
 
if(x%2!=0){ cout<<1; return;}
if(x==2){cout<<0; return;}
check1(x/2);
}
int main(){
cout<<check(8);
check1(8);
}