class Solution {
public:
int dis(int n){
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        for(int i=0; i<n; i++){
            s.insert(nums[i]);
             int ele=dis(nums[i]);
             s.insert(ele);
        }
       return s.size();
    }
};