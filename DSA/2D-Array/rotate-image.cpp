#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
 cin>>n;
 int m; cin>>m;
vector<vector<int>>v(m,vector<int>(n));
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>v[i][j];
    }
}
//brute force solution 
vector<vector<int>>p(n,vector<int>(m));
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        p[j][n-1-i]=v[i][j];
    }
}

// for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//         cout<<p[i][j]<<" ";
//     }
//     cout<<endl;
// }

// optimised it 

for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        swap(v[i][j],v[j][i]);
    }
}

for(int i=0; i<n; i++){
    reverse(v[i].begin(),v[i].end());
}

for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}


}