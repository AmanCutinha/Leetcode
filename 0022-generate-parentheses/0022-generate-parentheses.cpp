class Solution {
public:
    void solve(int n,int open,int close,string curr,vector<string>& ans){
        if(curr.size()==2*n){
            ans.push_back(curr);
            return;
        }
        if(open<n){
            solve(n,open+1,close,curr+"(",ans);
        }
        if(close<open){
            solve(n,open,close+1,curr+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;
        int open=0,close=0;
        solve(n,open,close,curr,ans);
        return ans;
    }
};