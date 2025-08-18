// // #include<bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int n, m,k;
// //     cin>>n>>m>>k;
// //     int count=0;
// //     vector<int>v(n);
// //     vector<int>v1(m);
   
// //     for(int j=0; j<n; j++){cin>>v[j];}
// //      for(int i=0; i<m; i++){cin>>v1[i];}
// //     // for(int i=0; i<m; i++){
// //     //     for(int j=0; j<n; j++){
// //     //         if(v1[i]-k<=v[j] && v[j]<=v1[i]+k){count++;}
// //     //     }
// //     // }
// //     // cout<<count;

// //     sort(v.begin(),v.end());
// //     sort(v1.begin(),v1.end());
// //     int j=0;
// //     int i=0;
// //     while(i<v.size() || j<v1.size()){
// //           if(i==v.size()-1){
// //             i=0;
// //             j++;
// //         }
// //         if(v[i]-k<v1[j] && v[i]+k>v1[j]){
// //             count++;
// //              i++;
            
// //             }
       
// //     }
// // cout<<count<<v.size();
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n, m,k;
//     cin>>n>>m>>k;
//     int count=0;
//     vector<int>v(n);
//     vector<int>v1(m);
   
//     for(int j=0; j<n; j++){cin>>v[j];}
//      for(int i=0; i<m; i++){cin>>v1[i];}
//     // for(int i=0; i<m; i++){
//     //     for(int j=0; j<n; j++){
//     //         if(v1[i]-k<=v[j] && v[j]<=v1[i]+k){count++;}
//     //     }
//     // }
//     // cout<<count;

//     sort(v.begin(),v.end());
//     sort(v1.begin(),v1.end());
//     int j=0;
//     int i=0;
//     while(i<v.size() || j<v1.size()){
//           if(i==v.size()-1){
//             i=0;
//             j++;
//         }
//         if(v[i]-k<v1[j] && v[i]+k>v1[j]){
//             count++;
//              i++;
            
//             }
       
//     }
// cout<<count<<v.size();
// }


#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n), v1(m);
    for(int j = 0; j < n; j++) cin >> v[j];
    for(int i = 0; i < m; i++) cin >> v1[i];
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    int count = 0, i = 0, j = 0;
    while(i < n && j < m) {
        if(abs(v[i] - v1[j]) <= k) {
            count++;
            i++;
            j++;
        } else if(v[i] < v1[j] - k) {
            i++;
        } else {
            j++;
        }
    }
    cout << count << endl;
    return 0;
}