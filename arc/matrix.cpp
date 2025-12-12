#include <bits/stdc++.h>
using namespace std;
int main(){

int arr[5][5];
int idx=-1;
int idx1=-1;
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(arr[i][j]==1){idx=i; idx1=j;}
    }
}
if(idx>2){idx=idx-2;}
else{idx=2-idx;}
if(idx1>2){idx1=idx1-2;}
else{idx1=2-idx1;}
cout<<idx+idx1;
}