class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int ans=0;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp.clear();
            for(int j=i;j<n;j++){
                int mx=0;
                int mn=INT_MAX;
                mp[s[j]]++;
                for(auto it:mp){
                    mx=max(mx,it.second);
                    mn=min(mn,it.second);
                }
                ans +=(mx-mn);
            }
        }
        return ans;
    }
};