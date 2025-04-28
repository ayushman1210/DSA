#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
getline(cin,str);
int n=(str.length())/2;
reverse(str.begin()+n, str.end());
cout<<str;
}