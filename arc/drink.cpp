#include <bits/stdc++.h>
using namespace std;
int main(){
 float n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
float sum=0;
for(int i=0; i<n; i++){
    sum+=v[i];
}
double res=sum/n;
cout<<fixed<<setprecision(12)<<res;
}