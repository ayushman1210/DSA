#include <bits/stdc++.h>
using namespace std;
int main(){
string str="1001";
int n=str.length();
int res=0;
for(int i=n-1; i>=0; i--){
    char ch=str[i];
    int num=(ch-'0');
    res+=num*(1<<(n-i-1));
}
cout<<res;
}