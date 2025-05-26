#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector <int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int i=0; 
int j=t-1;
bool flag=true;
while(i<=j){
    if(v[i]!=v[j]){flag=false; break;}
    i++;
    j--;
}
if(flag){cout<<"its palindrome";}
else{cout<<"not palindrome";}
}

//part 2 completed 