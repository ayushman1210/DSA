#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
   while(n--){
    cin>>a>>b>>c;
    if(a==b){
        if(c%2==0){
        cout<<"Second"<<endl;}
        else{
            cout<<"First"<<endl;
        }
    }
     else if(a>b){
        if(c%2==0){
        cout<<"Second"<<endl;}
        else{
            cout<<"First"<<endl;
        }
    }

    else if(a<b){
        if(c%2==0){
        cout<<"First"<<endl;}
        else{
            cout<<"Second"<<endl;
        }
   }

}
}