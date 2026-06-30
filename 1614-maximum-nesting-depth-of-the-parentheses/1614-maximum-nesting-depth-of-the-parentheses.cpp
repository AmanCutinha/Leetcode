class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int count=0;
        for(char ch:s){
            if(ch=='('){
                count++;
                res=max(res,count);
            }
            else if(ch==')'){
                count--;
            }
        }
        return res;
    }
};