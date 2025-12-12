#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
vector<vector<string>>v(10,vector<string>(10));
    while(t--){
for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        cin>>v[i][j];
    }
}
int sum=0;

for(int i=0; i<10; i++){
    int cnt=min(i+1,10-i);
    for(int j=i; j<10-i; j++){
        if(v[i][j]=="X"){sum+=cnt;}
    }
}
cout<<sum<<endl;
    }
}