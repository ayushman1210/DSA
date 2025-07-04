#include<bits/stdc++.h>
using namespace std;
void sum(int a, int b, int &sum1){
    if(a>b){cout<<sum1; return;}
    if(a%2!=0){sum1+=a;}
    sum(a+1,b,sum1);
}
int sum2(int a, int b){
 if(a>b){return 0;}
 int add=(a%2!=0) ? a : 0;
 return add+sum2(a+1,b);
}
int main(){
    int sum1=0;
sum(1,5,sum1);
cout<<sum2(1,5);
}