#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
getline(cin,str);
int count=0;
for(int i=0; i<str.length(); i++){
    if(str[i]==97 || str[i]==101 || str[i]==105  || str[i]==111 || str[i]==117 ){continue;}
    else{count++;}
}
cout<<count;
}