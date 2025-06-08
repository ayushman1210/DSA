#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
unordered_set<int>s;
for(int i=0; i<t; i++){
    int x;
    cin>>x;
s.insert(x);
}
for(auto it:s) cout<<it;

}