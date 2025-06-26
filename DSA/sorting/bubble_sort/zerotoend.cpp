#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=0; i<t; i++){
    for(int j=i+1; j<t; j++){
        if(v[i]==0){swap(v[i],v[j]);}
        else{break;}
    }
}
for(int i=0; i<t; i++){
    cout<<v[i];
}
}