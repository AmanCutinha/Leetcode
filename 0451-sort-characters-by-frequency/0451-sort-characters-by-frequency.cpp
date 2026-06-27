class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        vector<pair<char,int>> p;
        for(auto it:mp){
            p.push_back(it);
        }
        string ans="";
        sort(p.begin(),p.end(),[](pair<char,int> a,pair<char,int> b){
            return a.second>b.second;
        });

        for(auto it:p){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};