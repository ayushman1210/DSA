#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int maxi=INT_MIN;
    int smaxi=INT_MIN;
for(int i=0; i<s.size(); i++){
if(s[i]-'0'>maxi){ smaxi=maxi; maxi=s[i]-'0';}
else if(s[i]-'0'>smaxi && s[i]-'0'!=maxi){smaxi=s[i]-'0';}
}
cout<<maxi<<smaxi;
}