class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>mp;
    int n=nums.size();

    for(int i=0; i<n; i++){
        int x=target-nums[i];
        if(mp.find(x)!=mp.end()){return {mp[x],i};}
        mp[nums[i]]=i;
    }
    return {};
    }
};