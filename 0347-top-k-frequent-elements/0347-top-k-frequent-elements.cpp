class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>> v;
        for(auto &[num,count]:mp){
            v.push_back({count,num});
        }
        sort(v.rbegin(),v.rend());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};