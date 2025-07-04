//recursive solutions 

#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a+b;
}

void sum(int a , int b){
cout<<a+b;
}

int factorial(int n){
if(n==0){return 1;}
else{return n*factorial(n-1);}
}

void print(int n){

if(n>0){ cout<<n; print(n-1);}
}

void Prin(int n){ if(n==0) return ;
else  Prin(n-1); cout<<n;}

int sum1(int i, int n){
    int sum=0;
while (i<=n){sum+=i; i++;}
return sum;
}

int sum2(int n){
if(n==0){return 0;}
else{return n+sum2(n-1);}

}
int p=1;
void power(int a, int b){
    
    if (b==0){ cout<<p; return ; }
    else p=a*p; power(a,b-1);
}

int pow(int a ,int b){
    if(b==0)return 1;
return a*pow(a,b-1);
}
int main(){
// cout<<add(3,2);
// sum(2,3); 
// cout<<factorial(3);
print(5);
Prin(5);
// int n; cin>>n;
// cout<<sum1(1,n);
// cout<<sum2(5);
power(2,2);
cout<<pow(2,4);
}

//