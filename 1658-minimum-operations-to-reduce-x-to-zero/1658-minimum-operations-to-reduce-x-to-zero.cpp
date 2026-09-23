class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        int target = totalSum - x;
        if (target < 0) return -1; // x is greater than the total sum
        
        int n = nums.size();
        int maxLen = -1;
        int currentSum = 0;
        int left = 0;
        
        // Sliding window to find the longest subarray with sum == target
        for (int right = 0; right < n; ++right) {
            currentSum += nums[right];
            
            while (currentSum > target && left <= right) {
                currentSum -= nums[left];
                left++;
            }
            
            if (currentSum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }
        
        // If maxLen is still -1, no such subarray exists
        return maxLen == -1 ? -1 : n - maxLen;
    }
};