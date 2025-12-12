#include <bits/stdc++.h>
using namespace std;
int setbits(int n){
    int ans=__builtin_popcount(n);
    return ans;
}

int count_setBits(int n){
    int count=0;
    while(n>0){
        count++;
        n=n&(n-1);
    }
    return count;
}
int main(){
int n;
 cin>>n;
// cout<<setbits(n);
cout<<count_setBits(n);
}