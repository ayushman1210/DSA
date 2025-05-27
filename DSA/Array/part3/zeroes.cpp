#include<bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int n=nums.size();
    int i=0; 
    int j=n-1;
    while(i<=j){
        if(nums[i]==0){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    }
int main(){
int t;
cin>>t;
vector<int>v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
 moveZeroes(v);
 for(int i=0; i<t; i++){
    cout<<v[i];
 }
}