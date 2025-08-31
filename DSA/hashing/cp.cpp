#include <bits/stdc++.h>
using namespace std;
int main(){
int m;
cin>>m;
while(m--){
    int n ;
    cin>>n;
    int x;
    cin>>x;
    vector<int>v(n);
for(int i=0; i<n; i++){cin>>v[i];}
int mp=v[0]-0;
for(int i=1; i<n; i++){
mp=max(v[i]-v[i-1],mp);
}
mp=max(mp,2*(x-v[n-1]));
cout<<mp<<endl;
}

}