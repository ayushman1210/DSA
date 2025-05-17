#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
    int low=0;
    int high=t-1;
int target;
cin>>target;

bool flag=false;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v[mid]==target){flag=true; break;}
    if(v[mid]>target){ high=mid-1;}
    if(v[mid]<target){low=mid+1; }
}
    if(flag){ cout<<"element present";}
    else{cout<<"not preesent";}
}


// returning the value 

// #include<bits/stdc++.h>
// using namespace std;
// int fun(vector<int>&v, int tar){
//     int low=0;
//     int high=v.size()-1;
// while(low<=high){
//     int mid=low+(high-low)/2;
//     if(v[mid]==tar){return mid;}
//     if(v[mid]>tar){ high=mid-1;}
//     if(v[mid]<tar){low=mid+1; }
// }
// return -1;
// }
// int main(){
// int t;
// cin>>t;
// vector<int>v(t);
// for(int i=0; i<t; i++){
//     cin>>v[i];
// }
// int tar;
// cin>>tar;
// cout<<fun(v,tar);
// }