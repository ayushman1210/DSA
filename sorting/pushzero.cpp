// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
// vector<int>v(n);
// vector<int>v1;
// int count=0;
// for(int i=0; i<n; i++){
//   cin>>v[i];
//   if(v[i]!=0){v1.push_back(v[i]);}
//   else{count++;}
// }
// for(int i=0; i<v1.size(); i++){
// cout<<v1[i];
// }
// for(int i=0; i<count; i++){
//     cout<<0;
// }
// }

// using bubblesort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
vector<int>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
for(int i=0; i<n-1; i++){
for(int j=0; j<n-1-i; j++)
{
 if(v[j]==0)
 {
    swap(v[j],v[j+1]);
     flag=false;
    }
}
if(flag==true)
{ 
    break;
}
}
for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}
}