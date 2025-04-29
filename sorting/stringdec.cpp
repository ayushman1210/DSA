#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string s1;
int count=0;
for(int i=0; i<s.size(); i++){
    if(s[i]>='X'){s1.push_back(s[i]);}
}
int n=s1.length();
for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
    if (int(s1[j])>int(s1[j+1]))
    {
        swap(s1[j],s1[j+1]);
    }
    }
}

for(int i=0; i<s1.size(); i++){
    cout<<s1[i];
}
}