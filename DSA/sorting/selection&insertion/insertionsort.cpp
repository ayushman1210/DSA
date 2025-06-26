#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){cin>>v[i];}
for(int i=1; i<t; i++){
    int j=i;
    while(j>=1){
        if(v[j]>=v[j-1]){break;}
        else{
            swap(v[j],v[j-1]);
             j--;} 
    }
}
for(int i=0; i<t; i++){cout<<v[i];}
}