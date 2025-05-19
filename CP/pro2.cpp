#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int h;
cin>>h;
    int count=0;
while(t--){
    int n;
    cin>>n;
    if(n>h){count=count+2;}
    else{count=count+1;}
}
cout<<count;
}