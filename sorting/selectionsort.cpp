//selection sort 
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}

// for(int i=0; i<t-1; i++){
//     for(int j=i+1; j<t; j++){
//         if(v[i]>v[j]){swap(v[i],v[j]);}
//     }
// }


// by swapping minimum element
for(int i=0; i<t-1; i++){
    int min=INT_MAX;
    int idx=-1;
    for(int j=i; j<t; j++){
        if(v[j]<min){
            min=v[j];
            idx=j;}
    }
    swap(v[i],v[idx]);
}
// printing 

for(int i=0; i<t; i++){
    cout<<v[i];
}
}