// bubble sort 

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){cin>>v[i];}
for(int i=0; i<t-1; i++){
     bool flag=true; 
    for(int j=0; j<t-1-i; j++){
    if(v[j]>v[j+1]){
        swap(v[j],v[j+1]);
         flag=false;
         }
         
}  
 if(flag==true){
    break;
    }
}

for(int i=0; i<t; i++){cout<<v[i];}
}