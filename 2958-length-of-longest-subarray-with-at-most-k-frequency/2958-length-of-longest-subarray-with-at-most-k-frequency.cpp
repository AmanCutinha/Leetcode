class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=0,r=0,result=0;
        while(r<nums.size()){
            mp[nums[r]]++;

            while(l<r && mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
            }

            result=max(result,r-l+1);
            r++;
        }
        return result;
    }
};