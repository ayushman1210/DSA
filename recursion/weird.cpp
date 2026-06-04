#include<bits/stdc++.h>
using namespace std;


void pri(long long n){
    if(n==1){ cout<<1; return;}
    else {
        if(n%2==0){
            cout<<n<<' ';
            pri(n/2);
        }
        else{
            cout<<n<<' ';
            pri(n*3+1);
        }
    }

}
int main(){
    long long n;
    cin>>n;
   pri(n);
}