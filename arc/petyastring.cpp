#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
string t;
cin>>s;
cin>>t;
 transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    bool flag=true;
for(int i=0; i<s.length(); i++){
    if(s[i]==t[i]){continue;}
    else if(s[i]>t[i]){cout<<1; flag=false; break;}
    else if(s[i]<t[i]){cout<<-1; flag=false; break;}

}
if(flag){cout<<0;}
}