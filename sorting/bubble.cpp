#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
vector<int>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
for(int i=0; i<n-1; i++){
for(int j=0; j<n-1-i; j++){
 if(v[j]>v[j+1]){swap(v[j],v[j+1]); flag=false;}
}
if(flag==true){ // optimising the time complexity 
    break;
}
}
for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}
}

// bubble sort 
//T.C==> O(N^2) (WORST CASE , AVG CASE)
// S.C==>O(1)
// T.C==>O(N) (best case)