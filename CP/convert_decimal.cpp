#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;


while(n--){
    int t;
cin>>t;
int temp=t;
int count=0;
while(temp!=0){
    if(temp%2==1){count++;}
    temp=temp/2;
}
cout<<count;
int sum=0;
while(count--){
    sum+=pow(2,count);
}
// cout<<sum<<endl;
}
}