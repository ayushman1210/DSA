#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    if(n==0 || n==1){return 1;}
    else{return n*fact(n-1);}
}


void print(int n){
    if(n==0){return ;}
   
    print(n-1);
     cout<<n;
}

// int power(int a, int b){
//     if(b==1){return a;}
//     else{ 
//        return a*power(a,b-1);
//     }
// }

int power(int a, int b){
    if(b==0){return 1;}
    else {
        if(b%2==0){return power(a,b/2)*power(a,b/2);}
        else{
            return a*power(a,b/2)*power(a,b/2);
        }
    }
}

// int sum(int a, int b,int sum1){
//     if (a > b)
//         return sum1;
//     if (b % 2 == 0)
//         return sum(a, b - 1, sum1 + b);
//     else
//         return sum(a, b - 1, sum1);
// }


int sum(int a, int b){
    if(a>b){return 0;}
    else{
        if(b%2==0){
            return b+sum(a,b-1);
        }
        else{
            return sum(a,b-1);
        }
    }
}

bool check(int n){
    if(n==1){return true;}
    if(n%2!=0){return false;}

    else{
        return check(n/2);
    }
}


int fibo(int n){
    if(n==0 || n==1){return 1;}
    else{
        return fibo(n-1)+fibo(n-2);
    }
}


int stair(int n){
    if(n==1){return 1;}
    if(n==2){return 2;}
    return stair(n-1)+stair(n-2);
}

int maze(int sr, int sc , int er, int ec){
    if(sr>er || sc>ec){return 0;}
    if(sc==ec && sr==er){return 1;}
    int right=maze(sr,sc+1, er,ec);
    int left=maze(sr+1, sc,er,ec);
    return right+left;
}

int main(){
    // int n;
    // cin>>n;
    // int a;
    // int b;
    // cin>>a>>b;
    // cout<<fact(n);
    // print(n);
    // cout<<power(a,b);
    // cout<<sum(a,b,0);
    // cout<<sum(a,b);
    // cout<<check(n);
    // cout<<fibo(5);
    // cout<<stair(5);
    cout<<maze(0,0,2,2);
}