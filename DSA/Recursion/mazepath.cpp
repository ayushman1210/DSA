#include<bits/stdc++.h>
using namespace std;

int maze(int sr,int sc, int er, int ec){
    if(sr>er || sr>ec){return 0;}
    if (sr==er && sc==ec){return 1;}

    int rm=maze(sr+1, sc,er,ec);
    int downmove=maze(sr,sc+1,er,ec);
    int totalmove=rm+downmove;
    return totalmove;
}
void print(int sr,int sc, int er, int ec,string s){
     if(sr>er || sr>ec){return ;}
    if (sr==er && sc==ec){cout<<s<<endl;return; }

    print(sr+1, sc,er,ec,s+'r');
print(sr,sc+1,er,ec,s+'d');
}

int main(){
// cout<<maze(0,0,2,2);
print(1,1,3,3,"");
}