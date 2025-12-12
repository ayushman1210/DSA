#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
if(n%2!=0){
    cout<<0;
}
else{
    int num=n/2;
    int i=1;
    int j=num-1;
    int cnt=0;
    while(i<j){
        if(2*i+2*j==n){
          cnt++;
          i++;
          j--;
        }
       else {
        j--;
       }
    }
    cout<<cnt;
}
}