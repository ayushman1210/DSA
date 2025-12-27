#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
 cin>>n;
 int k;
 cin>>k;
 int sum=0;
vector<int>v(n);
vector<int>w(n);
for(int i=0; i<n; i++){cin>>v[i];}
for(int i=0; i<n; i++){cin>>w[i];}
sort(v.begin(), v.end());
sort(w.begin(), w.end(), greater<int>());

for(int i=0; i<k; i++){
   if(w[i]>v[i]){swap(w[i],v[i]);}
}
for(int i=0; i<n; i++){sum+=v[i];}
cout<<sum<<endl;
}
}


// 5
// 2 1
// 1 2
// 3 4
// 5 5
// 5 5 6 6 5
// 1 2 5 4 3
// 5 3
// 1 2 3 4 5
// 10 9 10 10 9
// 4 0
// 2 2 4 3
// 2 4 2 3
// 4 4
// 1 2 2 1
// 4 4 5 4