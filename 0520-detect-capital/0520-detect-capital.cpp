class Solution {
public:
    bool detectCapitalUse(string word) {
        int uc=0;
        int n=word.size();
        for(char ch:word){
            if(isupper(ch)) uc++;
        }
        if(uc==n) return true;
        else if(uc==0) return true;
        else if(isupper(word[0])&& uc==1 ) return true;
        else return false;
    }
};