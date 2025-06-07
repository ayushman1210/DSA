#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<long long>v(t);
long long  sum1= 1LL*(t*(t+1))/2;
long long sum=0;
for(long i=0; i<t-1; i++){
    long long x;
    cin>>x;
    sum+=x;
};

cout<<sum1-sum;
}