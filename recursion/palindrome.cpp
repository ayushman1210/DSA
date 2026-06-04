#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i, int j){
   
    if(i>j){return true;}
    else if(s[i]!=s[j]){
        return false;
    }
    return palindrome(s,i+1,j-1);
}

int main (){
    string s="madam";
    int n=s.size();
    cout<<palindrome(s,0,n-1);
}