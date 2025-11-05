#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}

//algorithm of cyclic sort 
int i=0;
while(i<n){
    int cidx=v[i]-1;
    if(i==cidx){i++;}
    else{
       swap(v[i],v[cidx]);
    }
}
for(int i=0; i<n; i++){cout<<v[i]<<" ";}
}