#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int> v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int x;
cin>>x;

for(int i=0; i<t-2; i++){
    for(int j=i+1; j<t-1; j++){
        for(int k=j+1 ;k<t; k++){
            if(v[i]+v[j]+v[k]==x){
                cout<<i<<j<<k<<endl;
            }
        }
    }
}
}