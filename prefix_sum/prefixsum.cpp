// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
//  cin>>n;
// vector<int>v(n);
// for(int i=0; i<n; i++){cin>>v[i];}
// int sum=0;
// for(int i=0; i<n; i++){
//     v[i]+=sum;
//      sum=v[i];
// }
// for(int i=0; i<n; i++){cout<<v[i]<<" ";}
// }

// partition

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
//  cin>>n;
// vector<int>v(n);
// for(int i=0; i<n; i++){cin>>v[i];}
// for(int i=1; i<n; i++){
//     v[i]+=v[i-1];
// }
// int idx=-1;
// for(int i=1; i<n; i++){ if(2*v[i]==v[n-1]){idx=i; break;}}
// cout<<idx;
// }


// product of array expcept self

#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
vector<int>p(n);
vector<int>s(n);
p[0]=v[0];
for(int i=1; i<n; i++){
p[i]=v[i]*p[i-1];
}


s[n-1]=v[n-1];
for(int i=n-2; i>=0; i--){
s[i]=v[i]*s[i+1];
}
// for(int i=0; i<n; i++){cout<<p[i];}

vector<int>ans(n);
for(int i=0; i<n; i++){
    ans[i]=p[i]*s[i];
}
for(int i=0; i<n; i++){cout<<ans[i]<<" ";}
}
