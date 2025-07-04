#include<bits/stdc++.h>
using namespace std;


int path(int n){
    if(n==1){return 1;}
    if(n==2){return 2;}
    else return path(n-1)+path(n-2);
}


int main(){
   cout<<path(3);
}    