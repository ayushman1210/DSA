#include<bits/stdc++.h>
using namespace std;

void generate(string s,int op, int clo, int n){
   if(clo==n){
    cout<<s<<endl;
    return ;
   }

    if(op<n){generate(s+'(',op+1,clo,n);}
    if(clo<op){generate(s+')',op, clo+1,n);}
}
int main(){
    int n=3;
    int op=0;
    int clo=0;
   generate("",op,clo,n);
}