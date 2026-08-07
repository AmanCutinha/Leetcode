class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int l=0,r=0;
        string ans="";

        while(l<n || r<m){
            if(l<n){
                ans += word1[l];
                l++;
            }
            if(r<m){
                ans += word2[r];
                r++;
            }
        }
        return ans;
    }
};