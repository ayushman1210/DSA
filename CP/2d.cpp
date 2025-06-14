// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin>>t;
// int m; cin>>m;
// vector<vector<char>>v(t,vector<char>(m));
// for(int i=0; i<t; i++){
//     for(int j=0; j<m; j++){
//         cin>>v[i][j];
//     }
// }
// int p;
// int q;
// cin>>p;
// cin>>q;
// bool flag=true;
// for(int i=0; i<t; i++){
//     for(int j=0; j<m; j++){
//        if(v[i][j]=='.'){
//         if(v[i-1][j-1]!='x'){flag=false;}
//         if(v[i-1][j]!='x'){flag=false;}
//         if(v[i-1][j+1]!='x'){flag=false;}
//         if(v[i][j-1]!='x'){flag=false;}
//         if(v[i][j+1]!='x'){flag=false;}
//         if(v[i+1][j-1]!='x'){flag=false;}
//         if(v[i+1][j]!='x'){flag=false;}
//         if(v[i+1][j+1]!='x'){flag=false;}
//        }
//        else flag=true;
//     }
// }
// if(flag){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, m;
    cin >> t >> m;
    vector<vector<char>> v(t, vector<char>(m));
    for(int i = 0; i < t; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];

    // Directions for 8 neighbors
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    bool flag = true;
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == '.') {
                for(int d = 0; d < 8; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];
                    if(ni >= 0 && ni < t && nj >= 0 && nj < m) {
                        if(v[ni][nj] != 'x') {
                            flag = false;
                        }
                    }
                }
            }
        }
    }
    if(flag) cout << "yes";
    else cout << "no";
    return 0;
}