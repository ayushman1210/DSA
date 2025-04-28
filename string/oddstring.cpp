#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string str;
for(int i=0; i<n; i++){
    cin>>str[i];
    if(i%2!=0){str[i]='#'; cout<<str[i];}
    else{cout<<str[i];}
}
}