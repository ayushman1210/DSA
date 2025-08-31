#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){cin>>v[i];}
   int XOR=0;
   for(int i=0; i<n; i++){
    XOR=XOR^v[i];
   }
   cout<<XOR;
}