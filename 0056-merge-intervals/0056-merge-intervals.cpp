class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        sort(inter.begin(),inter.end());
        for(auto i:inter){
            if(ans.empty()||ans.back()[1]<i[0])
                ans.push_back(i);
            else
                ans.back()[1]=max(ans.back()[1],i[1]); 
        }
        return ans;
    }
};