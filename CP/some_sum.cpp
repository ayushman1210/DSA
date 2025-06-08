#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int s; int e;
cin>>s>>e;
int sum1=0;
for(int i=1; i<=t; i++){
    int sum=0;
    int temp=i;
    while(temp>0){
        int ld=temp%10;
        temp=temp/10;
        sum+=ld;
    }
    if(sum>=s && sum<=e){sum1+=i;}
}
cout<<sum1;
}