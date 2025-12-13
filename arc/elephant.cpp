#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 int cnt=0;
while(n>0){
    if(n>=5){n=n-5; cnt++;}
    else if(n>=4){n=n-4; cnt++;}
        else if(n>=3){n=n-3;cnt++;}
            else if(n>=2){n=n-2;cnt++;}
                else if(n>=1){n=n-1;cnt++;}
}
cout<<cnt;
}