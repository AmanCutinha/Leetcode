class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> s;
        int n=nums.size();

        for(int i=0;i<=n-k;i++){
            unordered_set<int> seen;

            for(int j=i;j<i+k;j++){
                seen.insert(nums[j]);
            }

            for(int x: seen){
                s[x]++;
            }
        }
        int ans=-1;
        for(auto &[num,cnt]: s){
            if(cnt==1) ans=max(ans,num);
        }
        return ans;
    }
};