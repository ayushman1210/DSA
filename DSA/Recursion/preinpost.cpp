#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0){return ;}
cout<<"pre"<<n<<endl;
print(n-1);
cout<<"in"<<n<<endl;
print(n-1);
cout<<"post"<<n<<endl;
}
int main(){
print(3);
}