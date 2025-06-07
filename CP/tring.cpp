#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
cin.ignore();
    string s1;
while(t--){
  getline(cin,s1);
  cout<<s1[0];
  for(int i=0; i<s1.size(); i++){
    if(s1[i]==32){cout<<s1[i+1];}
  }
  cout<<endl;
}
}