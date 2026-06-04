#include<bits/stdc++.h>
using namespace std;
int main(){
    int m; 
    int n;
    cin>>m>>n;
    vector<vector<int>>v(m,vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

bool hehe=false;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]==0){
                hehe=true;
                 break;
            }
           
        }
        if(hehe){
            for(int j=0; j<n;j++){
                v[i][j]=-1;
            }
            for(int j=0 ; j<m; j++){
                v[j][i]=-1;
            }
        }
        hehe=false;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]==-1){
                v[i][j]=0;
            }
        }
    }



    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}