// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
using ll= long long;
int main() {
  int n; 
  cin>>n;
  while(n--){
      int x;
      cin>>x;
      int cnt=0; 
    for(ll i=1; i<=x; i=i*10+1 ){
        for(int d=1; d<=9; d++){
            if(i*d <=x){cnt++;}
        }
    }
    cout<<cnt<<endl;
}
}