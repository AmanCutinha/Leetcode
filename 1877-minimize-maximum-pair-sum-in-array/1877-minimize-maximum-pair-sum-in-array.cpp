class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1,sum=0;
        while(i<j){
            int csum=nums[i]+nums[j];
            sum=max(sum,csum);
            i++;
            j--;
        }
        return sum;
    }
};