#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
int element=-1;
for(int i=0; i<t; i++){
    cin>>v[i];
}
// brute force 

// for(int i=0; i<t; i++){
//     int count=0;
//     for(int j=0; j<t; j++){
//     if(v[i]==v[j]){ 
//         count++;
//         if(count>t/2) {
//             element=v[i]; 
//             break; 
//         }
//     }
         
// }
// }
// cout<<element;


// better approach hash map 

int hash[t]={0};
for(int i=0; i<t; i++){
    hash[v[i]]++;
}

}