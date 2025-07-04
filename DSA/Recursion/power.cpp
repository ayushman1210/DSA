#include<bits/stdc++.h>
using namespace std;


int ppow(int a, int b){
    if(b==1){return a;}
if(b==0){return 1;}
int ans=ppow(a,b/2);
if(b%2==0)return ans*ans;
else return a*ans*ans;
}



int main(){
cout<<ppow(2,5);
}