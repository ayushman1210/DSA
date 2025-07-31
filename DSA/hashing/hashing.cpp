#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int hash[t]={0};
int arr[t];
for(int i=0; i<t; i++){
    cin>>arr[i];
}
int k; 
cin>>k;
for(int i=0; i<t; i++){
    hash[arr[i]]++;
}
while(k--){
    int n;
    cin>>n;
    cout<<hash[n];
}
}