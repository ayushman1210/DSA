#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int count=0;
int max=0;
for(int i=0; i<t; i++){
if(v[i]==1){
    count++;
    if(max<count){
        max=count;
    }
}
else{
    count=0;
}

}
cout<<max;
}