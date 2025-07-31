#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
vector<int>v(2*n);
for(int i=0; i<2*n; i++){
    char ch;
    cin>>ch;
    v.push_back(ch);
}
for(int i=0; i<2*n; i++){cout<<v[i];}
}
