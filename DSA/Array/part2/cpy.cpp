#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int i=0; int j=t-1;

while(i<=j){
int temp=v[i];
v[i]=v[j];
v[j]=temp;
i++;
j--;
}
for(int i=0; i<t; i++){
    cout<<v[i];
}
}