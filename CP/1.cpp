#include <bits/stdc++.h>
using namespace std;

int main() {
int a;
int b;
cin>>a;
cin>>b;
int eater=(a+1)*4+b*3;
int slice=8;
if(eater%slice==0){cout<<eater/slice;}
else{cout<<eater/slice+1;}
}