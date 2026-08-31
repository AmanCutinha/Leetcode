class Solution {
public:
    void f(int idx,string digits,string curr,vector<string>& v,vector<string>& ans){
        if(idx==digits.size()){
            ans.push_back(curr);
            return;
        }
        int digit = digits[idx] - '0';
        string letters = v[digit];
        for (char letter : letters) {
            curr.push_back(letter);           
            f(idx + 1, digits, curr, v, ans); 
            curr.pop_back();                  
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string curr="";

        vector<string> v={
            "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
        };
        f(0,digits,curr,v,ans);
        return ans;
    }
};