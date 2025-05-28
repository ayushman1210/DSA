#include<bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){j=i; break;}
        }
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
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
// TC-->o(n);
// SC-->o(1);