class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int> bad, seen;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                if (seen.count(nums[i]))
                    bad.insert(nums[i]);
                seen.insert(nums[i-1]);
            }
        }

        seen.insert(nums.back());

        return seen.size() - bad.size();
    }
};