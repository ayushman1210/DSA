#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
int k;
cin>>k;
// int res=INT_MIN;
// for(int i=0; i<n-k+1; i++){
//     int sum=0;
// for(int j=i; j<i+k; j++){
// sum+=v[j];
// }
// res=max(sum,res);
// }
// cout<<res<<endl;

//optimized way 
int i=1;
int j=k;
int prevsum=0;
for(int i=0; i<k; i++){
      prevsum+=v[i];
}
int maxsum=prevsum;
while(j<n){
    int newsum=prevsum+v[j]-v[i-1];
prevsum=newsum;
if(maxsum<prevsum){
    maxsum=prevsum;
}
i++;
j++;
}
cout<<maxsum;

}