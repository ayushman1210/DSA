#include<bits/stdc++.h>
using namespace std;
int fact(int max){
    int num=1;
    if(max==1 || max==0){return 1;}
    else{
    return num*max*fact(max-1);
}
}
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int max=INT_MIN;
for(int i=0; i<t; i++){
    if(v[i]>max){max=v[i];}
}
cout<<fact(max);
}